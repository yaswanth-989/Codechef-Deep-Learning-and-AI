# HDLVHR07 - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Calculate Neuron Output

Okay, let's solidify your understanding of a neuron.

Remember, a neuron takes multiple inputs, processes them, and produces a single output. For this problem, you'll simulate a neuron that receives four inputs, multiplies each input by a corresponding weight, sums the weighted inputs, and then adds a bias. This sum will be the output of our neuron.

Here's what you need to do:

- Define Inputs: You are given four input values: 2, 0, 3, and -1.
- Define Weights: You are given four corresponding weights: 0.1, 0.5, 0.2, and 0.4.
- Define Bias: The bias value is 0.3.
- Calculate Weighted Sum: Multiply each input by its corresponding weight and then sum the results.
- Add Bias: Add the bias to the weighted sum.
- Output: Print the final result after adding the bias. This is the neuron's output.

Complete the code and print the neuron's output.

 **Expected Output** 

```
Inputs: [ 2  0  3 -1]
Weights: [0.1 0.5 0.2 0.4]
Bias: 0.3
Neuron output: 0.7

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T17:27:30.920Z  

```cpp
import numpy as np

# Step 1: Enter the four input values here
inputs = ([2, 0, 3, -1])

# Step 2: Enter the corresponding weights here
weights = ([0.1,0.5,0.2,0.4])

# Step 3: Enter the bias value here
bias = 0.3

# Step 4: Calculate weighted sum + bias
output = np.dot(inputs,weights)+bias


# Step 5: Print the result
print("Inputs:", inputs)
print("Weights:", weights)
print("Bias:", bias)
print("Neuron output:", output)

```

---

[View on CodeChef](https://www.codechef.com/problems/HDLVHR07)