#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[2][2], int secondMatrix[2][2], int resultMatrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display the matrix
void displayMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[2][2], secondMatrix[2][2], resultMatrix[2][2];

    printf("    \n");

    // Input for first matrix
    printf("                            -----------Matrix 1-----------                         \n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Display first matrix
    printf("  ");
    printf("\n");
	displayMatrix(firstMatrix);

    // Input for second matrix
    printf("                            -----------Matrix 2-----------                         \n \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Display second matrix
    printf("\n\n");
    displayMatrix(secondMatrix);

    // Multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    // Display result
    printf("                 -----------Result: Multiplication Matrix-----------                     \n");
    displayMatrix(resultMatrix);

    return 0;
}

