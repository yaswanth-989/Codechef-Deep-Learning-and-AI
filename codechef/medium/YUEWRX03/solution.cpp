X = X / 255.0  # scale pixels to range 0–1

# 3. Split data
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.25, random_state=42
)

# 4. Train MLP Classifier
mlp = MLPClassifier(
    hidden_layer_sizes=(32,),  # keep as example, user can change
    activation="relu",
    solver="adam",
    max_iter=2000,
    random_state=42
)

mlp.fit(X_train, y_train)  # filled blank

print("Model training completed.")

# 5. Make predictions
predictions = mlp.predict(X_test)  # filled blank

# Show a few predictions
for i in range(min(5, len(X_test))):
    print(
        f"Predicted: {'Triangle' if predictions[i] == 0 else 'Cross'} | "
        f"Actual: {'Triangle' if y_test[i] == 0 else 'Cross'}"
    )
