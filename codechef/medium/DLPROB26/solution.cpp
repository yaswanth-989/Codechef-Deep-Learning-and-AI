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