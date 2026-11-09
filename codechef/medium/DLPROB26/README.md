# DLPROB26

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Converting Text Into Numbers

In this exercise, you’ll repeat the same idea used in the demonstration:  **turning raw text into a numeric format that a neural network can understand.** 

 **Task** 
Using the sentence:  **"deep learning rocks"** 

Do the following:

- Create your own token-to-ID mapping (You can choose any IDs you want, as long as each token gets a unique number.)
- Tokenize the sentence by words → ["deep", "learning", "rocks"]
- Convert the sentence into a list of numbers using the mapping you created.

 **Expected Output** 

```
Tokens: ['deep', 'learning', 'rocks']
Token → ID Mapping: {'deep': 1, 'learning': 2, 'rocks': 3}
Numeric Vector: [1, 2, 3]

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T11:21:55.775Z  

```cpp
import re

# Sentence
text = "deep learning rocks"

# Step 1: Tokenize using regex (same style as demonstration)
tokens = re.findall(r"\w+", text.lower())  
# → ["deep", "learning", "rocks"]

# Step 2: Create token-to-ID mapping
token_to_id = {
    "deep": 1,
    "learning": 2,
    "rocks": 3
}

# Step 3: Convert tokens to their numeric IDs
numeric_vector = [token_to_id[token] for token in tokens]

print("Tokens:", tokens)
print("Token → ID Mapping:", token_to_id)
print("Numeric Vector:", numeric_vector)
```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB26)