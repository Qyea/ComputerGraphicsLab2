import tkinter as tk
from tkinter import filedialog
import cv2 as cv
import numpy as np
from PIL import Image, ImageTk

class ImageProcessingApp:
    def __init__(self, root):
        self.root = root
        self.curProcess = None

        self.create_widgets()

    def create_widgets(self):
        self.frame = tk.Frame(self.root)
        self.frame.pack()

        # Кнопка для адаптивной бинаризации
        self.adaptive_button = tk.Button(self.frame, text="Адаптивная бинаризация", command=self.on_adaptive_thresholding_triggered)
        self.adaptive_button.pack(padx=10, pady=5)
        self.adaptive_button.pack()

        # Кнопка для увеличение резкости
        self.filter_button = tk.Button(self.frame, text="Высокочастотный фильтр", command=self.on_filter_triggered)
        self.filter_button.pack(padx=10, pady=5)
        self.filter_button.pack()
        
         # Кнопка для метода локальной пороговой обработки
        self.local_button = tk.Button(self.frame, text="Локальная бинаризация", command=self.on_local_thresholding_triggered)
        self.local_button.pack(padx=10, pady=5)
        self.local_button.pack()

        # Место для отображения изображений
        self.image_label = tk.Label(self.root)
        self.image_label.pack(padx=10, pady=10)

    def load_image(self, path):
        image = cv.imread(path)
        return cv.cvtColor(image, cv.COLOR_BGR2RGB)

    def process_image(self, image):
        if(self.curProcess == "Adaptive"):
            gray_image = cv.cvtColor(image, cv.COLOR_BGR2GRAY)
            adaptive_threshold = self.adaptive_threshold(gray_image, block_size=11, constant=2)
            return adaptive_threshold
        elif(self.curProcess == "Filter"):
            sharpened_image = self.high_pass_filter(image)
            return sharpened_image
        elif(self.curProcess == "Local"):
            bernsen_image = self.bernsen_local_threshold(image)
            niblack_image = self.niblack_local_threshold(image)
            merged_image = self.merge_images(bernsen_image, niblack_image)
            return merged_image
    
    def bernsen_local_threshold(self, image, window_size=5, contrast_threshold=5):
        gray_image = cv.cvtColor(image, cv.COLOR_BGR2GRAY)
        height, width = gray_image.shape
        threshold_image = np.zeros_like(gray_image)

        for i in range(height):
            for j in range(width):
                top = max(0, i - window_size // 2)
                bottom = min(height, i + window_size // 2)
                left = max(0, j - window_size // 2)
                right = min(width, j + window_size // 2)

                local_region = gray_image[top:bottom, left:right]
                min_val = np.min(local_region)
                max_val = np.max(local_region)
                contrast = max_val - min_val

                if contrast <= contrast_threshold:
                    threshold = (min_val + max_val) // 2
                else:
                    threshold = (min_val + max_val) // 2

                threshold_image[i, j] = 255 if gray_image[i, j] > threshold else 0

        return threshold_image

    def niblack_local_threshold(self, image, window_size=150, k=-0.2):
        gray_image = cv.cvtColor(image, cv.COLOR_BGR2GRAY)
        height, width = gray_image.shape
        threshold_image = np.zeros_like(gray_image)

        for i in range(height):
            for j in range(width):
                top = max(0, i - window_size // 2)
                bottom = min(height, i + window_size // 2)
                left = max(0, j - window_size // 2)
                right = min(width, j + window_size // 2)

                local_region = gray_image[top:bottom, left:right]
                mean_val = np.mean(local_region)
                std_dev = np.std(local_region)
                threshold = mean_val + k * std_dev

                threshold_image[i, j] = 255 if gray_image[i, j] > threshold else 0

        return threshold_image
    
    def merge_images(self, image1, image2):
        height = max(image1.shape[0], image2.shape[0])
        width = image1.shape[1] + image2.shape[1]
        merged_image = np.zeros((height, width), dtype=np.uint8)
        merged_image[:image1.shape[0], :image1.shape[1]] = image1
        merged_image[:image2.shape[0], image1.shape[1]:] = image2
        return Image.fromarray(merged_image)
    
    def high_pass_filter(self, image):
        kernel = np.array([[-1, -1, -1],
                           [-1,  9, -1],
                           [-1, -1, -1]])
        sharpened_image = cv.filter2D(image, -1, kernel)
        return Image.fromarray(sharpened_image)
    
    def adaptive_threshold(self, image, block_size, constant):
        threshold_image = np.zeros_like(image)
        height, width = image.shape

        for i in range(height):
            for j in range(width):
                block = image[max(0, i - block_size // 2):min(height, i + block_size // 2 + 1),
                                max(0, j - block_size // 2):min(width, j + block_size // 2 + 1)]
                threshold = np.mean(block) - constant
                threshold_image[i, j] = 255 if image[i, j] > threshold else 0

        return Image.fromarray(threshold_image)

    def display_image(self, image):
        # Преобразование изображения в объект ImageTk
        img_tk = ImageTk.PhotoImage(image)

        # Отображение изображения на метке
        self.image_label.configure(image=img_tk)
        self.image_label.image = img_tk

    def on_adaptive_thresholding_triggered(self):
        self.curProcess = "Adaptive"
        image_path = self.choose_image_file()
        if image_path:
            image = self.load_image(image_path)
            processed_image = self.process_image(image)
            self.display_image(processed_image)
            
    def on_filter_triggered(self):
        self.curProcess = "Filter"
        image_path = self.choose_image_file()
        if image_path:
            image = self.load_image(image_path)
            processed_image = self.process_image(image)
            self.display_image(processed_image)

    def on_local_thresholding_triggered(self):
        self.curProcess = "Local"
        image_path = self.choose_image_file()
        if image_path:
            image = self.load_image(image_path)
            processed_image = self.process_image(image)
            self.display_image(processed_image)

    def choose_image_file(self):
        filetypes = (("Image files", "*.jpg;*.jpeg;*.png"), ("All files", "*.*"))
        image_path = filedialog.askopenfilename(filetypes=filetypes)
        return image_path

root = tk.Tk()
app = ImageProcessingApp(root)
root.mainloop()