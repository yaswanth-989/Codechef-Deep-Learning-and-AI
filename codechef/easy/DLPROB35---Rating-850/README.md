# DLPROB35 - Rating 850

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Build & Experiment with Your Own MLP Classifier

In this exercise, you will  **create a small classification dataset**, train an MLP classifier, and explore how architecture affects predictions.

 **Task** 

- Create a small dataset Example idea: Input feature: hours of exercise per week Output label: Fitness Level → 0 = Low, 1 = Medium, 2 = High
- Train an MLPClassifier with: Initialize an MLPClassifier Use one hidden layer with 5 neurons Use ReLU as the activation function Train the model for 1000 iterations
- Make predictions for all inputs: Use predict_proba() → get probability for each class Use predict() → get the predicted class

 **Notes** 

- This is a toy dataset - you can choose any small numeric input and categorical output.
- The goal is to see how an MLP converts numbers into class probabilities and how architecture changes affect predictions.
- warning sign can be seen in the output. No action is required.

 **Expected Output** 

```
Predicted probabilities:
 [[0.86 0.13 0.01]
 [0.61 0.34 0.05]
 [0.24 0.55 0.21]
 [0.05 0.5  0.45]
 [0.01 0.31 0.68]
 [0.   0.16 0.84]]
Predicted classes: [0 0 1 1 2 2]

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T14:18:19.515Z  

```cpp
print("Predicted classes:", predictions)
print("Predicted probabilities:\n", np.round(probs,2))
import numpy as np
# 5. Print results

predictions = mlp_clf.predict(X)
```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB35)