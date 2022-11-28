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
    int size = 1;
    int *arr = (int*) malloc(size * sizeof(int)); 
    int length = input(arr);

    printf("length %d\n", length);

    output(arr, length);

    // int *res = (int*) malloc(size * sizeof(int));

    // filter(arr, res, length);

    // output(res, length);

    // free(arr);
}
/* 
int* filter(int *arr, int *res, int n){
    int counter = 0;

    for (int i = 0; i < n; i++) {

        for (int j = 1; j < n; j++) {
            int element1 = arr[i];
            int element2 = arr[j];

            if (element1 == element2) {
                // pass
            }
            else {
                res = realloc(res, sizeof(int) * i);
                res[counter] = element1;
                counter++;
            }
        }
    }
    return res;
}
 */

// fails if length is greater than 5...?
int input(int *arr) {
    int val;
    int i = 0;

    int size = 1;
    while(val != -1) {
        
        if(scanf("%d", &val) != 0) {

            int *tmp;
            tmp = realloc(arr, sizeof(int)*size);

            if (!tmp) {
                error();
            }
            else {
                tmp[i] = val;
                arr = tmp;
            }

            // printf("read: %d\n", arr[i]);
            i++;
            size++;
        } else {
            // free(arr);
            error();
        }
    }
    return i - 1;
}

int output(int *arr, int n) {
    int val;
    int i = 0;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}


void error(void) {
    printf("n/a");
    exit(0);
}