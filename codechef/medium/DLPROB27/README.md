# DLPROB27

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mini Project - Toy Product Classifier

Imagine you are building a  **toy product recommendation system**  for an e-commerce website.
Products have  **tabular data**  (like price and category),  **images**  (product pictures), and  **text**  (product names).
A neural network cannot understand raw text or images directly — everything must be converted into  **numeric vectors**.

In this mini project, you will practice  **turning different types of data into numbers**  and combining them for a neural network input.

 **Tasks** 

- Tabular Data Create a small table with product categories and prices. Convert the categorical column (e.g., "Clothes", "Electronics") into numbers using a mapping. Keep only numeric columns and convert them into a NumPy array.
- Image Data Load a small product image (grayscale) using PIL. Convert it into a NumPy array. Flatten the 2D array into a 1D vector. Print the first few pixel values (e.g., first 10) to check your data. Tip: Grayscale means each pixel is a single number between 0–255.
- Text Data Take product names (e.g., "Red Shirt") and tokenize them into words. Create a token-to-ID mapping for all words in your product names. Convert each product name into a numeric vector using your mapping. Tip: This is similar to the demonstration we did with customer reviews. You can use.split() or re.findall() for tokenization.
- Combine Everything For each product, combine the tabular numbers, first few pixels of the image, and text token IDs into a single numeric vector. Print the combined vectors for all products.

 **Reminder** 

- You don’t need to train a neural network yet — the focus is on preparing the data.
- This project shows how tabular, image, and text data are all converted to numeric vectors before being fed into a model.
- Keep your code simple and focus on the process of conversion.

 **Goal** 
By completing this project, you will understand how real-world data is transformed into a format that neural networks can process:

```
Tabular data → numbers
Images → numeric pixel vectors
Text → token IDs
→ All combined → network-ready numeric vectors

```

 **Expected Output** 

```
Tabular numeric data:
 [[ 20   0]
 [100   1]
 [ 15   2]
 [ 25   0]]

Image numeric vector (first 10 pixels): [255 255 255 255 255 255 255 255 255 255]

Text numeric vectors: [[1, 2], [3], [4], [5, 6]]

Combined numeric vectors for all products:
 [array([ 20,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   1,
          2])
 array([100,   1, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   3])
 array([ 15,   2, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   4])
 array([ 25,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   5,
          6])                                                           ]

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T11:23:48.933Z  

```cpp
        img_flat[:10],
        text_vectors[i]
    ])
    combined_vectors.append(combined)

combined_vectors = np.array(combined_vectors, dtype=object)


def main():
    print("Tabular numeric data:\n", tabular_numeric)
    print("\nImage numeric vector (first 10 pixels):", img_flat[:10])
    print("\nText numeric vectors:", text_vectors)
    print("\nCombined numeric vectors for all products:\n", combined_vectors)


if __name__ == "__main__":
    main()

```

---

[View on CodeChef](https://www.codechef.com/problems/DLPROB27)