#include <stdio.h>

int main(int argc, char **argv) {
    for (int i = 0; i < 100; i++) {
        printf("%c ", argv[1][i]);
    }
}