# ML-DL-From-Scratch

Welcome to the **ML-DL-From-Scratch** library! This library is designed to implement fundamental and advanced machine learning algorithms from the ground up using minimal dependencies. Our goal is to provide a clear and educational resource for understanding and experimenting with machine learning.

## Features

- **Supervised Learning**: 
  - Linear Regression
  - Logistic Regression
  - Support Vector Machines (SVMs)
  - Decision Trees
  - Random Forests

- **Unsupervised Learning**:
  - k-Means Clustering
  - Principal Component Analysis (PCA)

- **Utilities**:
  - Data Preprocessing (scaling, normalization, encoding)
  - Model Evaluation Metrics (e.g., accuracy, precision, recall, RMSE)
  - Dataset Splitting (train/test/validation)

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/CODE-ESI/ml-dl-from-scratch.git
   ```

2. Navigate to the project directory:
   ```bash
   cd ml-dl-from-scratch
   ```

3. Install dependencies:
   ```bash
   pip install -r requirements.txt
   ```

## Usage

### Example: Linear Regression

Here's a simple example to use the Linear Regression module:

```python
from ml_dl_from_scratch.supervised.line_fit import LineFit

# Example dataset
X = [[1], [2], [3], [4]]
y = [3, 7, 11, 15]

# Initialize and train the model
model = LineFit()
model.train(X, y)

# Predict
predictions = model.estimate([[5], [6]])
print(predictions)  # Output: [19, 23]
```

More examples are available in the `/examples` directory.

## Directory Structure

```
ml-dl-from-scratch/
├── core_algorithms/          # Core ML algorithms
├── datasets/                 # Example datasets
├── utils/                    # Utility functions
├── examples/                 # Example scripts for using the library
├── tests/                    # Unit tests for validation
├── LICENSE                   # License information
├── README.md                 # Project overview
└── requirements.txt          # Required Python dependencies
```

## Contribution

Contributions are welcome! To contribute:

1. Fork the repository.
2. Create a feature branch: `git checkout -b feature-name`.
3. Commit your changes: `git commit -m 'Add feature-name'`.
4. Push to the branch: `git push origin feature-name`.
5. Create a pull request.

Please ensure your code follows the repository's coding standards and includes tests where applicable.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

For questions, suggestions, or collaboration, feel free to open an issue or contact us through the [CODE-ESI GitHub organization](https://github.com/CODE-ESI).

Happy Learning!
