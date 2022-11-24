#include <stdio.h>

int max(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        if(arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }
    return arr[0];
}

int input(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        int x; 
        scanf("%d", &x);
        arr[i] = x;
    }
}

int output(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void main(void) {
    int n = 5;
    int arr[n];

    input(arr, n);

    output(arr, n);

    int val = max(arr, n);
 
    printf("\n%d", val);

}

