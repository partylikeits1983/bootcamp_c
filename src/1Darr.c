#include <stdio.h>
#include <stdlib.h>

int input(int *arr, int n);
int output(int *arr, int n);

int main(void) {
    int n;
    n = 5;
    int arr[n];

    // n = 5;
    input(arr, n);
    output(arr, n);
}

int input(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
}

int output(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}