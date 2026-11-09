# DLPROB05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Loss Function (How Wrong Are We)

A  **loss function**  tells the network how wrong its prediction was. It’s basically the network’s  **error score**.

 **Why Do We Need It?** 
The network needs feedback to learn:

- “Am I improving?”
- “Was this prediction better or worse than before?”

Loss functions provide this feedback so the model knows how to adjust its weights.

 **Real-life Analogy** 
Imagine throwing darts:

- If you hit the bullseye → loss is low
- If the dart lands far away → loss is high

Loss =  **distance from the correct answer**.

 **Example: Mean Squared Error (MSE)** 
Used when predicting  **numbers**.

It  **squares**  the  **difference**  betweem the  **prediction**  and the  **actual**  value:
 **Loss = average of (prediction – actual)²** 

Short explanation:
MSE punishes  **bigger mistakes more**  (because of the square),
so the network learns to be more accurate over time.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T08:03:26.366Z  

```cpp
4*12 -30 = 18
```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB05)