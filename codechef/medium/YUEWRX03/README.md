# YUEWRX03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Triangle vs Cross (X)

In this practice problem, you will build an image classification model using an  **MLP**  to distinguish between  **triangles**  and  **crosses (X)**.

A dataset has already been generated for you using code. The dataset contains simple grayscale images of shapes and is organized into folders:

practice_dataset/

- triangle/ → images of triangles
- cross/ → images of crosses

Each image:

- Is grayscale
- Has the same size
- Contains a single shape
- Belongs to one of two classes

Your task is to train an MLP that learns to classify these images using  **only their pixel values**.

 **Your Tasks** 

- Load images from the dataset folders (triangle and cross)
- Convert each image into numeric pixel values
- Assign class labels: Triangle → 0 Cross → 1
- Normalize pixel values so that all inputs features are on a similar scale
- Train an MLPClassifier using the image data Fill in the entire MLPClassifier initialization except random_state Use 32 neurons in the hidden layer Use ReLU as the activation function Use Adam as the optimizer Set the maximum number of training iterations to 2000
- Use the trained model to predict the class of unseen images

 **Expected Output** 

```
Total images loaded: 60
Each image converted to 784 numbers
Model training completed.
Predicted: Triangle | Actual: Triangle
Predicted: Triangle | Actual: Triangle
Predicted: Cross | Actual: Cross
Predicted: Cross | Actual: Cross
Predicted: Triangle | Actual: Triangle

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-15T16:00:48.363Z  

```cpp
X = X / 255.0  # scale pixels to range 0–1

# 3. Split data
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.25, random_state=42
)

# 4. Train MLP Classifier
mlp = MLPClassifier(
    hidden_layer_sizes=(32,),  # keep as example, user can change
    activation="relu",
    solver="adam",
    max_iter=2000,
    random_state=42
)

mlp.fit(X_train, y_train)  # filled blank

print("Model training completed.")

# 5. Make predictions
predictions = mlp.predict(X_test)  # filled blank

# Show a few predictions
for i in range(min(5, len(X_test))):
    print(
        f"Predicted: {'Triangle' if predictions[i] == 0 else 'Cross'} | "
        f"Actual: {'Triangle' if y_test[i] == 0 else 'Cross'}"
    )

```

---

[View on CodeChef](https://www.codechef.com/problems/YUEWRX03)