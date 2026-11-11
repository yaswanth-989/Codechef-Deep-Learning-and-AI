# DPLEARN09 - Rating 750

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Handwritten Digit Recognition Project

👋 Hey Innovators!
Welcome to the  **Handwritten Digit Recognition**  Project.

The objective of this project is to build a  **deep learning model**  that can automatically recognize handwritten digits (0–9) from grayscale images. This is a  **multi-class image classification problem**  where the model predicts which digit each image represents.

The project is organized into three parts:

- Part 1: Dataset Loading and Exploration
- Part 2: Data Preprocessing and Feature Scaling
- Part 3: Model Training, Evaluation, and Predictions

Let’s kick things off with  **Part 1**.

### Part 1: Dataset Loading and Exploration

In this part, you’ll work on  **loading the digits dataset**  and performing an initial exploration. The dataset is available directly in scikit-learn via `load_digits`. It contains  **8x8 grayscale images of handwritten digits (0–9)**, commonly used as a benchmark for classification problems.

 **Your Tasks** 

- Load the Dataset
- Use load_digits() from scikit-learn.
- Extract: X → images (shape: n_samples × 8 × 8) y → labels (digits 0–9). Docs: sklearn.datasets.load_digits
- Explore the Dataset Implement a function explore_data(X, y) that reports:
- Total number of images.
- Dimensions of a single image.
- Number of unique digit classes.
- Count of samples per digit class.
- Minimum and maximum pixel values.
- Whether the dataset contains missing values.

 **Expected Output:** 
When executed, the program should display results similar to:

```
=== Digits Dataset Information ===
Total samples       : 1797
Image shape         : (8, 8)
Number of classes   : 10
Pixel value range   : (np.float64(0.0), np.float64(16.0))
Has missing values? : False

Class distribution:
  Class 0: 178 samples
  Class 1: 182 samples
  Class 2: 177 samples
  Class 3: 183 samples
  Class 4: 181 samples
  Class 5: 182 samples
  Class 6: 181 samples
  Class 7: 179 samples
  Class 8: 174 samples
  Class 9: 180 samples

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T14:23:36.513Z  

```cpp
        X (np.ndarray): Images array
    Analyze the dataset: shapes, class distribution, and value range.
    
    Args:
def explore_data(X, y):
    """
    return X, y


    y=digits.target
    # TODO: Return X and y
    X=digits.images
    # TODO: Extract labels into a variable y
    # TODO: Extract images into a variable X
    """Load the digits dataset into arrays."""
    # TODO: Load the digits dataset
def load_data():

import numpy as np

from sklearn.datasets import load_digits
        y (np.ndarray): Labels array
    digits=load_digits()
```

---

[View on CodeChef](https://www.codechef.com/problems/DPLEARN09)