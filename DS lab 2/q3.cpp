#include <stdio.h>

int getInputMatrix() {
    int n;
    scanf("%d", &n);
    return n;
}

int main() {
    int arrA[2][2], arrB[2][2], arrJoin[2][2], arrMeet[2][2], arrProduct[2][2];

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element at position %d%d: ", i + 1, j + 1);
            arrA[i][j] = getInputMatrix();
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element at position %d%d: ", i + 1, j + 1);
            arrB[i][j] = getInputMatrix();
        }
    }

    // Joining of matrices (OR operation)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (arrA[i][j] || arrB[i][j] == 1) {
                arrJoin[i][j] = 1;
            } else {
                arrJoin[i][j] = 0;
            }
        }
    }

    // Meeting of matrices (AND operation)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (arrA[i][j] && arrB[i][j] == 1) {
                arrMeet[i][j] = 1;
            } else {
                arrMeet[i][j] = 0;
            }
        }
    }

    // Boolean Product of Matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            arrProduct[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                arrProduct[i][j] = arrProduct[i][j] || (arrA[i][k] && arrB[k][j]);
            }
        }
    }

    // Print the resultant matrices
    printf("\nJoined Matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arrJoin[i][j]);
        }
        printf("\n");
    }

    printf("\nMeet of A and B is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arrMeet[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of A and B is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arrProduct[i][j]);
        }
        printf("\n");
    }

    return 0;
}

