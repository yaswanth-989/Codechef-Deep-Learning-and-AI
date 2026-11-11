model = MLPRegressor(
    hidden_layer_sizes=(4,),  # one hidden layer with 4 neurons
    activation='relu',
    solver='adam',
    max_iter=2000,
    random_state=0
)

# ---- STEP 3: TRAIN MODEL ----
model.fit(X, y)
print("\nModel training complete!")

# ---- STEP 4: MAKE PREDICTION ----
new_apartment = np.array([[800, 2]])
predicted_rent = model.predict(new_apartment)

print("\nNew Apartment:", new_apartment)
print("Predicted Rent: $", round(predicted_rent[0], 2))


