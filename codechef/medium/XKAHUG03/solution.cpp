
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
