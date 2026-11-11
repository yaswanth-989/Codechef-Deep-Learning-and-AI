print("Predicted classes:", predictions)
print("Predicted probabilities:\n", np.round(probs,2))
import numpy as np
# 5. Print results

predictions = mlp_clf.predict(X)