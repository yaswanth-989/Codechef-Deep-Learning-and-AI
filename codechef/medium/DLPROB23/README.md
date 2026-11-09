# DLPROB23

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Convert an Image Into Numbers

In this exercise, you will take a small image, preferably a handwritten digit (like one from the MNIST dataset) and prepare it in the exact numeric format that a neural network expects.

Your task is to:

- Load a given image (sample_image.png) and convert it to grayscale Grayscale gives each pixel a single intensity value (0–255), making processing easier.
- Resize the image to 28×28 This ensures all images are consistent in size, just like MNIST digits.
- Convert the image to a NumPy array This turns the image into a matrix of pixel values.
- Flatten the 2D image into a 1D vector This is the form simple neural networks (MLPs) accept as input.
- Print the following: Original shape (after resizing) Flattened shape First 10 pixel values (to avoid overwhelming output)

This practice problem helps you understand what happens to images before they are sent into a neural network.

 **Expected Output** 

```
Original shape (after resize): (28, 28)
Flattened shape: (784,)
First 10 pixel values: [255 255 255 255 255 255 255 255 255 255]

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T11:18:47.662Z  

```cpp
from PIL import Image
import numpy as np

# Load a handwritten digit image and convert to grayscale
img = Image.open("sample_image.png").convert("L")  # 'L' = grayscale mode

# Resize the image so all images are uniform (like 28x28)
img = img.resize((28, 28))

# Convert to a numeric NumPy array
img_array = np.array(img)

# Flatten to 1D vector 
img_flat = img_array.flatten()

print("Original shape (after resize):", img_array.shape)
print("Flattened shape:", img_flat.shape)

# Show only the first 10 pixel values (avoids overwhelming students)
print("First 10 pixel values:", img_flat[:10])

```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB23)