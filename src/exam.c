/*

Given an input of an array of unknown size, output an array of the elements
without repeats.

The array always ends in -1

End of the array should not end in a space.
There should be no new line break at the end of the output

*/

#include <stdio.h>
#include <stdlib.h>

int input(int *arr);
int output(int *arr, int n);
int* filter(int *arr, int *res, int n);
void error(void);

int main(int argc, char **argv) {

    // printf("%s\n", argv[1]);

    int size = 1;

    int *arr = (int*) malloc(size * sizeof(int)); 

    int length = input(arr);

    printf("length %d\n", length);

    output(arr, length);

}

int* filter(int *arr, int *res, int n){

    
}


int input(int *arr) {
    int val;
    int i = 0;
    while(val != -1) {
        
        if(scanf("%d", &val) != 0) {
            arr = realloc(arr, sizeof(int));
            arr[i] = val;

            // printf("read: %d\n", arr[i]);
            i++;
        } else {
            error();
        }
    }
    return i - 1;
}

int output(int *arr, int n) {
    int val;
    // not working, got to go lol
    int i = 0;

    printf("here\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}


void error(void) {
    printf("n/a");
    exit(0);
}