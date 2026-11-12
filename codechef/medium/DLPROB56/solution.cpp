# 5. Measure numeric difference caused by small visual change
difference = np.abs(arr_original - arr_modified)
print("Average pixel difference:", difference.mean())
print("Maximum pixel difference:", difference.max())

# 6. Flatten images for MLP input
X_original = arr_original.flatten().reshape(1, -1)
X_modified = arr_modified.flatten().reshape(1, -1)

# 7. Define the known price of the car (target)
y_original = [20000]  # price in USD

# 8. Build and train an MLP Regressor
mlp = MLPRegressor(hidden_layer_sizes=(4,), activation='relu', solver='adam', max_iter=2000, random_state=42)
mlp.fit(X_original, y_original)

# 9. Predict the price of the modified image
pred_modified = mlp.predict(X_modified)
print("Predicted price for modified image:", pred_modified[0])
