# HDLVHR11 - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Forward Pass Through a Simple Neural Network

Imagine you're building a neural network to predict whether a person will  **buy a product**  based on two features:

- time_spent_on_app (minutes)
- number_of_ads_seen

Your network has the following architecture:

 **1. Input Layer** 

- 2 neurons → one for each feature.

 **2. Hidden Layer** 

- 1 neuron → takes both inputs, applies weights + bias, and produces a hidden output.

 **3. Output Layer** 

- 1 neuron → predicts the probability of buying the product.

 **Your Task**  Fill in the blanks and complete the forward pass:

- Compute the hidden neuron value
- Use it to compute the output neuron value

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T17:23:52.998Z  

```cpp
import numpy as np

# Step 1: Input features (time_on_app=10 minutes, ads_seen=4)
inputs = np.array([10, 4])

# Step 2: Weights and bias for the hidden neuron
weights_hidden = np.array([0.15, 0.25])
bias_hidden = 0.4

# Step 3: Hidden neuron calculation
hidden_output = np.dot(inputs, weights_hidden) + bias_hidden
print("Hidden Neuron Output:", round(hidden_output, 2))

# Step 4: Output neuron weights and bias
weights_output = np.array([0.5])
bias_output = -0.2

# Step 5: Output neuron calculation
output = np.dot(np.array([hidden_output]), weights_output) + bias_output
print("Final Output (Buy Probability):", round(output, 2))

```

---

[View on CodeChef](https://www.codechef.com/problems/HDLVHR11)