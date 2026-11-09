# XKAHUG03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Predicting Plant Growth

Let's test your understanding of Activations, Loss, and Optimizers. We'll simulate a single neuron predicting plant growth based on sunlight exposure.

 **Scenario** 
We have  **one neuron**  trying to predict the  **height of a plant**  (in cm) based on how many hours of sunlight it gets.

- Input: sunlight hours
- Neuron math: multiply by a weight + add a bias
- Activation: apply ReLU
- Actual plant height: 25 cm
- Goal: compute prediction → measure loss → update weight

You will complete each step through small pieces of code.

 **Your Task:** 

- Compute the neuron's raw output: Multiply the input (sunlight hours) by a weight and add a bias.
- Apply the activation function (ReLU): Convert the raw output into the neuron’s final prediction.
- Calculate the loss using MSE: Measure how far the prediction is from the actual plant height.
- Update the weight using Gradient Descent: Compute the gradient and apply one optimization step.

 **Expected output** 

```
Raw Output: 13.0
Prediction after ReLU: 13.0
Loss: 144.0
Updated Weight: 3.44

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T10:53:00.841Z  

```cpp

# 1. Neuron output
raw_output = (sunlight_hours * weight) + bias
print("Raw Output:",raw_output)

# 2. ReLU activation
prediction = max(0, raw_output)
print("Prediction after ReLU:", prediction)

# 3. Loss (MSE)
loss = (prediction - actual_height) ** 2
print("Loss:", loss)

# 4. Optimizer step (Gradient Descent)
gradient = 2 * sunlight_hours * (prediction - actual_height)
weight = weight - lr * gradient
print("Updated Weight:", weight)

```

---

[View on CodeChef](https://www.codechef.com/problems/XKAHUG03)