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
