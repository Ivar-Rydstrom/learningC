#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[] = "hello world what is up";
    printf("%.*s", 6, name + 1);
    return 0;
};