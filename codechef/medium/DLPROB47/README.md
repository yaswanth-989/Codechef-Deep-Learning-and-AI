# DLPROB47

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MLP Regressor MCQ

Which of the following correctly describes the  **forward pass**  in an MLP used for  **regression** ?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-10T15:56:23.307Z  

```cpp
MLPs used for regression output a single continuous value with a linear activation and are trained using Mean Squared Error.  
MLPs used for classification output probabilities for each class using a softmax activation and are trained with Cross-Entropy loss.

```
Explanation
Regression predicts numeric values, while classification predicts categories; therefore the output layer design and loss function differ.
```

```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB47)