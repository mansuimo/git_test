#include <stdio.h>
#include "cooperation.h"

void printWelcome(const char* name) {
    printf("Welcome to %s!\n", name);
}

int add(int a, int b) {
    return a + b;
}

void printSeparator(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}
