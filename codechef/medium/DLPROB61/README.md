# DLPROB61

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Normalization with Image Data

In the previous demonstration, you saw that neural networks react directly to numeric pixel values, and that normalization helps keep these values on a similar scale.

In this practice problem, you will work with  **image data again**, so you can clearly see how normalization affects the numeric input given to an MLP.

 **Problem Scenario** 

You are given a single image of an object (for example, a simple shape).
Even though the image looks simple, each pixel is still a number between  **0 and 255**.

 **Your Task** 

- Load an image and convert into grayscale image and resize it to a fixed size.
- Convert the image into numeric pixel values.
- Train an MLP Regressor using raw pixel values.
- Normalize the pixel values by scaling them to the range 0–1.
- Train an MLP Regressor using normalized pixel values Fill in the blanks to: Initialize an MLPRegressor Set hidden_layer_sizes to (4,) Use ReLU as the activation function Use Adam as the solver Set max_iter to 2000 Train the model using the normalized input data Generate a prediction using the normalized input
- Compare the predictions made by both models.

 **Expected Output** 

```
Prediction WITHOUT normalization: 28.0
Prediction WITH normalization: 0.55

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T19:34:11.632Z  

```cpp
    solver='adam',
    max_iter=2000,
    random_state=42
)

mlp_raw.fit(X_raw, y)
pred_raw = mlp_raw.predict(X_raw)

print("Prediction WITHOUT normalization:", round(pred_raw[0], 0))

# 3. Normalize image pixel values

X_norm = X_raw / 255.0

# 4. Train MLP WITH normalization

mlp_norm = MLPRegressor(
    hidden_layer_sizes=(4,),
    activation='relu',
    solver='adam',
    max_iter=2000,
    random_state=42
)
```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB61)