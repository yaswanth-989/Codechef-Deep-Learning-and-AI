    solver='adam',
    max_iter=2000,
    random_state=42
)

mlp_raw.fit(X_raw, y)
pred_raw = mlp_raw.predict(X_raw)

print("Prediction WITHOUT normalization:", round(pred_raw[0], 0))

# 3. Normalize image pixel values

X_norm = X_raw / 255.0

# 4. Train MLP WITH normalization

mlp_norm = MLPRegressor(
    hidden_layer_sizes=(4,),
    activation='relu',
    solver='adam',
    max_iter=2000,
    random_state=42
)