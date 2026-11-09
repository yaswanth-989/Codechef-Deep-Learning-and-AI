# DLPROB20

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Convert Categorical Data to Numbers

We have a small dataset showing different fruits and their quantities:

Fruit	Quantity
Apple	10
Mango	15
Banana	7
Apple	12
- The Quantity column is numeric → the network can use it directly.
- The Fruit column is made of words → the network cannot process it directly.

 **Goal:**  Represent the  **Fruit**  column in numeric form so a neural network can work with it.

 **Task** 

- Choose an approach to convert the Fruit column into numbers: Assign simple numbers (label encoding) Use separate columns for each fruit (one-hot encoding)
- Convert the table into numeric form.

 **Expected Output** 

```
Original Data:
    Fruit  Quantity
0   Apple        10
1   Mango        15
2  Banana         7
3   Apple        12

After Label Encoding:
    Fruit  Quantity  Fruit_Label
0   Apple        10            0
1   Mango        15            1
2  Banana         7            2
3   Apple        12            0

One-Hot Encoding:
   Apple  Banana  Mango
0      1       0      0
1      0       0      1
2      0       1      0
3      1       0      0

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T11:01:23.286Z  

```cpp
import pandas as pd

# Original table
data = pd.DataFrame({
    "Fruit": ["Apple", "Mango", "Banana", "Apple"],
    "Quantity": [10, 15, 7, 12]
})

print("Original Data:")
print(data)  # Students see the original DataFrame

# ----- Label Encoding -----
label_map = {"Apple": 0, "Mango": 1, "Banana": 2}
data["Fruit_Label"] = data["Fruit"].map(label_map)  
# Students should: use the 'map' function with the label_map to convert fruit names to numbers

print("\nAfter Label Encoding:")
print(data)  # Students see how label encoding converts categories to numeric values

# ----- One-Hot Encoding -----
one_hot = pd.get_dummies(data["Fruit"], dtype=int)  
# Students should: use pandas function to create one-hot encoded columns for each fruit

```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB20)