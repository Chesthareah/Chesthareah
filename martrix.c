#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void generateRandomMatrix(int matrix[SIZE][SIZE]) {
    // This function fills a 2D array (matrix) of size SIZE x SIZE with random numbers between 0 and 9.
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 10; // Generate random values between 0 and 9
        }
    }
}

void multiplyMatrices(const int matrix1[SIZE][SIZE], const int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    // This function multiplies two matrices (matrix1 and matrix2) and stores the result in the 'result' matrix.
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; // Initialize the result matrix element to 0 before computation.
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j]; // Multiply and accumulate the values for each cell.
            }
        }
    }
}

void printMatrix(const int matrix[SIZE][SIZE]) {
    // This function prints the content of a 2D array (matrix) to the console.
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]); // Print each element followed by a space.
        }
        printf("\n"); // Move to the next row after printing all elements of the current row.
    }
}

int main() {
    srand(time(0)); // Seed the random number generator with the current time.

    int matrix1[SIZE][SIZE];
    int matrix2[SIZE][SIZE];
    int result[SIZE][SIZE];

    printf("Generating random values for Matrix 1...\n");
    generateRandomMatrix(matrix1); // Generate random values for the first matrix.

    printf("Generating random values for Matrix 2...\n");
    generateRandomMatrix(matrix2); // Generate random values for the second matrix.

    printf("Matrix 1:\n");
    printMatrix(matrix1); // Display the first matrix.

    printf("Matrix 2:\n");
    printMatrix(matrix2); // Display the second matrix.

    multiplyMatrices(matrix1, matrix2, result); // Multiply the two matrices and store the result in 'result' matrix.

    printf("Result of Matrix Multiplication:\n");
    printMatrix(result); // Display the result of the matrix multiplication.

    return 0;
}
