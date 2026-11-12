# DLPROB56

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Predict Car Price from an Image

You are helping a car dealership estimate the price of a car based on its photo.

Instead of using tabular data, we will use a  **single car image**  and train a small neural network to predict the price.

 **Problem Statement** 

- You have one image of a car (car.png)
- You know the price of this car (for example, $20,000)
- Your task is to train a small MLP on this image and predict the price for a slightly modified version of the same image (e.g., slightly brighter or darker, simulating real-world variation)

 **Tasks** 

- Load the car image Use PIL to open the image Convert it to grayscale Resize to a small size (e.g., 28×28) to make it easy for MLP
- Create a slightly modified version For example, change the brightness using ImageEnhance.Brightness This simulates small real-world changes
- Convert images to numbers Convert both original and modified images into NumPy arrays Flatten them to create input vectors for the MLP
- Build and train an MLP Regressor Use 1 hidden layer (start with 4 neurons) Activation: 'relu', Solver: 'adam', max_iter=2000 Train the model on the original image with its known price
- Predict the price of the modified image Feed the modified image into the trained MLP Print the predicted price

 **Expected Output** 

```
Original image pixel sample: [232 232 232 232 231]
Modified image pixel sample: [255 255 255 255 255]
Average pixel difference: 235.4783163265306
Maximum pixel difference: 255
Predicted price for modified image: 23684.380191498167

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T19:21:41.303Z  

```cpp
# 5. Measure numeric difference caused by small visual change
difference = np.abs(arr_original - arr_modified)
print("Average pixel difference:", difference.mean())
print("Maximum pixel difference:", difference.max())

# 6. Flatten images for MLP input
X_original = arr_original.flatten().reshape(1, -1)
X_modified = arr_modified.flatten().reshape(1, -1)

# 7. Define the known price of the car (target)
y_original = [20000]  # price in USD

# 8. Build and train an MLP Regressor
mlp = MLPRegressor(hidden_layer_sizes=(4,), activation='relu', solver='adam', max_iter=2000, random_state=42)
mlp.fit(X_original, y_original)

# 9. Predict the price of the modified image
pred_modified = mlp.predict(X_modified)
print("Predicted price for modified image:", pred_modified[0])

```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB56)