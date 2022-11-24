#include <stdio.h>

int s21_lenth(char * str) {

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main(void) {
    char str[100] = "hello";

    int val = s21_lenth(str);

    printf("%d\n", val);
}