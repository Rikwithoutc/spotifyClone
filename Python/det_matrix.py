import numpy as np

def get_matrix_minor(matrix, i, j):
    # Function to find the minor of a matrix by removing row i and column j
    return [row[:j] + row[j+1:] for row in (matrix[:i] + matrix[i+1:])]

def determinant(matrix):
    # Base case for 2x2 matrix
    if len(matrix) == 2:
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]

    # Recursive case for larger matrices
    det = 0
    for col in range(len(matrix)):
        minor = get_matrix_minor(matrix, 0, col)
        cofactor = ((-1) ** col) * matrix[0][col] * determinant(minor)
        det += cofactor

    return det

# Example usage:
matrix = [
    [18, 8, 10],
    [-5, 18, 3],
    [2, -21, -6]
]

# or for larger matrices like:
# matrix = [
#     [2, 1, 3],
#     [0, -1, 2],
#     [1, 4, 5]
# ]

print(f"Determinant of the matrix: {determinant(matrix)}")
