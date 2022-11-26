#include <stdio.h>
#include <stdlib.h>

int input(int **arr, int n);
int output(int **arr, int n);

int main(void) {
    int n;
    int **arr;

    n = 3;

    arr = (int **) malloc(n * sizeof(int*));

    for (int row = 0; row < n; row++) {
        arr[row] = (int *) malloc(n * sizeof(int));
    }

    input(arr, n);
    output(arr, n);
}

int input(int **arr, int n) {

    int counter = 0;

    for (int i = 0; i < n; i++) {
        int counter = 0;
        for (int j = 0; j < n; j++) {
            arr[i][j] = counter;
            counter += 1;
            // printf("%d ", array[j*n + i]);
        }
    }
}

int output(int **arr, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            printf("%d ", arr[i][j]);
            // printf("%d ", array[j*n + i]);
        }
        printf("\n");
    }
}
