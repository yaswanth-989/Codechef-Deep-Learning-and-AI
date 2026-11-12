# BAOSAJ03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Smiley Face Image and MLP Sensitivity

In this practice problem, you will work with a  **smiley face image**  🙂.

To humans, the smiley face looks the same even if it becomes slightly brighter or darker.
However, a neural network does not understand faces or emotions. It only processes  **numbers**.

You will take  **one smiley face image**  and create a  **slightly modified version**  by changing its brightness.
This simulates natural variations such as lighting or screen brightness differences.

You will then feed both images into an  **MLP**  and observe how:

- Pixel values change
- These numbers are used as inputs to the network
- Normalization affects the model’s behavior

 **Task** 

Complete the following steps:

- Load a smiley face image and convert it to grayscale
- Create a second version of the same image by slightly changing its brightness
- Convert both images into NumPy arrays and compare their pixel values
- Measure the numeric difference between the two images
- Flatten the images and use them as input to an MLP
- Train and evaluate an MLP Regressor (with and without normalization) Fill in all parameters to initialize an MLPRegressor, including: One hidden layer with 4 neurons ReLU activation function Adam optimizer max_iter = 2000 Train the model using raw (unnormalized) pixel values and predict on the modified image.
- Normalize the pixel values and train the MLP again
- Compare how normalization changes the model’s response to the modified image

 **Expected Output** 

```
Original image pixel sample: [203 203 203 203 203]
Modified image pixel sample: [243 243 243 243 243]
Average pixel difference: 213.6454081632653
Maximum pixel difference: 255
Prediction WITHOUT normalization: -0.51
Prediction WITH normalization: 1.4

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T20:07:31.618Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/BAOSAJ03)