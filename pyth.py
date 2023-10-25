import tkinter as tk
from PIL import Image, ImageTk
import tkinter as tk
from tkinter import filedialog
from PIL import Image, ImageTk

def choose_image():
    file_path = filedialog.askopenfilename(filetypes=[("Image files", "*.jpg;*.jpeg;*.png")])
    file_entry.delete(0, tk.END)
    file_entry.insert(0, file_path)
    preview_image()

def preview_image():
    file_path = file_entry.get()
    image = Image.open(file_path)
    image.thumbnail((500, 500))
    photo = ImageTk.PhotoImage(image)
    image_label.configure(image=photo)
    image_label.image = photo

def apply_threshold():
    file_path = file_entry.get()
    image = Image.open(file_path)
    # остальной код обработки изображения


def preview_image():
    file_path = file_entry.get()
    image = Image.open(file_path)
    image.thumbnail((500, 500))
    photo = ImageTk.PhotoImage(image)
    image_label.configure(image=photo)
    image_label.image = photo

def apply_threshold():
    file_path = file_entry.get()
    image = Image.open(file_path)
    image = image.convert("L")
    pixels = image.load()
    width, height = image.size
    block_size = int(block_size_entry.get())
    C = int(c_value_entry.get())
    threshold_image = Image.new("L", (width, height))
    threshold_pixels = threshold_image.load()
    half_size = block_size // 2
    for y in range(height):
        for x in range(width):
            f_max = 0
            f_min = 255
            for j in range(-half_size, half_size + 1):
                for i in range(-half_size, half_size + 1):
                    px = x + i
                    py = y + j
                    if 0 <= px < width and 0 <= py < height:
                        gray = pixels[px, py]
                        f_max = max(f_max, gray)
                        f_min = min(f_min, gray)
            threshold = (f_max + f_min) // 2 - C
            gray = pixels[x, y]
            binary = 255 if gray > threshold else 0
            threshold_pixels[x, y] = binary
    threshold_image.show()


root = tk.Tk()
root.title("Адаптивная пороговая обработка")

file_label = tk.Label(root, text="Выберите изображение:")
file_label.pack()

file_entry = tk.Entry(root)
file_entry.pack()

preview_button = tk.Button(root, text="Просмотреть", command=preview_image)
preview_button.pack()

block_size_label = tk.Label(root, text="Размер блока:")
block_size_label.pack()

block_size_entry = tk.Entry(root)
block_size_entry.pack()

c_value_label = tk.Label(root, text="Значение C:")
c_value_label.pack()

c_value_entry = tk.Entry(root)
c_value_entry.pack()

apply_button = tk.Button(root, text="Применить порог", command=apply_threshold)
apply_button.pack()

image_label = tk.Label(root)
image_label.pack()

root.mainloop()