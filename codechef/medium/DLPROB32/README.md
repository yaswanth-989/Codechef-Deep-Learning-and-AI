# DLPROB32

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Predict Apartment Rent with MLPRegressor

You are helping a real estate company  **predict monthly rent**  for apartments based on  **apartment size**  and  **number of bedrooms**.

Your task is to  **create a small dataset**, train a neural network, and make predictions for new apartments.

 **Problem Statement** 

- Features: Apartment size in square feet Number of bedrooms
- Target: Monthly rent (in USD)

 **Tasks** 

- Create a small dataset (at least 4–6 apartments). Example: Size (sq ft)BedroomsRent ($)500112007002160090021800110032200
- Build an MLP Regressor Initialize an MLPRegressor Use 1 hidden layer with 4 neurons Use ReLU as the activation function Use Adam as the solver Set the maximum number of iterations to 2000
- Train the model on your dataset.
- Make a prediction Test your model on a new apartment, e.g., [800 sq ft, 2 bedrooms]. Print the predicted rent.

 **Expected Output** 

```
Training Data (X):
[[ 500    1]
 [ 700    2]
 [ 900    2]
 [1100    3]]

Target Values (y):
[1200 1600 1800 2200]
/home/chef/venv/lib/python3.11/site-packages/sklearn/neural_network/_multilayer_perceptron.py:781: ConvergenceWarning: Stochastic Optimizer: Maximum iterations (2000) reached and the optimization hasn't converged yet.
  warnings.warn(

Model training complete!

New Apartment: [[800   2]]
Predicted Rent: $ 1669.68

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T14:12:40.620Z  

```cpp
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



```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB32)