    hidden_layer_sizes=(4,),
    activation='relu',
mlp_raw = MLPRegressor(
# 6. Train MLP WITHOUT normalization

y = [1]
# Dummy regression target

X_modified = arr_modified.flatten().reshape(1, -1)
X_original = arr_original.flatten().reshape(1, -1)
# 5. Flatten images for MLP input

print("Maximum pixel difference:", difference.max())
print("Average pixel difference:", difference.mean())
difference = np.abs(arr_original - arr_modified)

print("Original image pixel sample:", arr_original[0][:5])
print("Modified image pixel sample:", arr_modified[0][:5])
# 4. Compare pixel values
arr_modified = np.array(img_modified)

arr_original = np.array(img)
# 3. Convert images to NumPy arrays

img_modified = enhancer.enhance(1.2)   # slightly brighter
enhancer = ImageEnhance.Brightness(img)
# 2. Create a slightly modified version (brightness change)

img = img.resize((28, 28))
img = Image.open("smiley.png").convert("L")
# 1. Load smiley face image, convert to grayscale, resize
from sklearn.neural_network import MLPRegressor

from PIL import Image, ImageEnhance
import numpy as np