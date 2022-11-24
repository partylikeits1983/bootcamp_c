#include <stdio.h>

void swap(int *a, int *b) {
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {
    int a = 1;
    int b = 0;

    swap(&a, &b);

    printf("a: %d\n", a);
    printf("b: %d\n", b);

}