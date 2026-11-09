# DLPROB07

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Optimizer (The Weight Adjuster)

Optimizers are algorithms that help a neural network learn from its mistakes (as measured by the loss function). They adjust the weights (the numbers inside the connections between neurons) to try and reduce the loss.

It is literally  *how the network learns*.

 **1. How it works (simplified):** 
Backpropagation uses the loss to calculate gradients, and the optimizer uses those gradients to update the weights. The gradient tells us the direction of the steepest increase in the loss. The optimizer then takes a step in the  *opposite*  direction (down the gradient) to reduce the loss.

 **Backpropagation simply means:**  sending the error  **backward**  through the network to  **determine**  how much each  **weight**  contributed to it.

 **2. Why Do We Need It?** 
If  **loss = error measurement**, then  **optimizer = correction method**.

The optimizer uses the loss to decide:

- which direction each weight should change
- and by how much

 **Example: Adam Optimizer** 
Adam is like a  **smart coach** :

- learns from past mistakes
- adjusts its steps dynamically
- works well for almost all types of problems

That’s why both beginners  **and**  experts commonly use  **Adam**.

 **3. Learning Rate:**  The learning rate controls how  **big**  a step the  **optimizer**  takes when updating  **weights.** 

- Too large → training may become unstable
- Too small → training becomes very slow This is critical to understanding optimizers.

 **Loss vs Optimizer:**  The loss function tells the network how wrong it is, while the optimizer decides how to fix it.

 **Putting it All Together** 

- Input: Data goes into the neural network.
- Calculations & Activation: Neurons perform calculations and use activation functions to decide whether to fire.
- Prediction: The network makes a prediction.
- Loss: The loss function compares the prediction to the correct answer and calculates a loss.
- Backpropagation: It takes the loss and figures out how much each weight contributed to the error by computing gradients.
- Optimization: The optimizer uses the loss to adjust the weights in the network, trying to reduce the loss.
- Repeat: This process is repeated many times with different data, gradually improving the network's ability to make accurate predictions.

Think of it as a cycle: Predict, Measure the Error, Adjust, Repeat. This is how neural networks learn! You'll see these concepts used all the time.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T08:12:19.131Z  

```cpp
(68-75)**2=49
```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB07)