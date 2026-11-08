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
