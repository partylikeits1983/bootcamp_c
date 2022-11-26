#include <stdio.h>

int s21_strcpy(char *s, char *t) {
    while (*s != '\0') {
        *(t) = *(s);
        s++;
        t++;
    }
    *t = '\0';
}

int main(void) {

    char str1[] = "string";
    char str2[100] = {'\0'};

    s21_strcpy(str1, str2);

    printf("%s\n", str2);
}
