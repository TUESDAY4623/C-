// #include <stdio.h>
// void rotateMatrix(int matrix[][10], int n) {
//     int temp[10][10];

//     // Copy the original matrix to the temporary matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             temp[i][j] = matrix[i][j];
//         }
//     }

//     // Rotate the matrix 90 degrees clockwise
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             matrix[j][n - i - 1] = temp[i][j];
//         }
//     }
// }

// void printMatrix(int matrix[][10], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int n;
//     printf("Enter the size of the square matrix: ");
//     scanf("%d", &n);

//     int matrix[10][10];

//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     printf("Original Matrix:\n");
//     printMatrix(matrix, n);

//     rotateMatrix(matrix, n);

//     printf("Rotated Matrix:\n");
//     printMatrix(matrix, n);

//     return 0;
// }




#include<stdio.h>
#define MAX 10

void rotateMatrix(int matrix[][MAX], int n) {
    int temp[MAX][MAX];

    // Copy the original matrix to the temporary matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = matrix[i][j];
        }
    }

    // Rotate the matrix 90 degrees clockwise
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[j][n - i - 1] = temp[i][j];
        }
    }
}

void printMatrix(int matrix[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[MAX][MAX];

    printf("Enter the elements of the matrix:\n");
}