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
