#include <stdio.h>


int passString(char *str) {
    for (int i = 0; i < 10; i++) {
        printf("%c\n", str[i]);
    }
}

int main(void) {
    char string[100];
    printf("input string \n");
    scanf("%s", string);

    printf("%c\n", string[0]);

    passString(string);

}

