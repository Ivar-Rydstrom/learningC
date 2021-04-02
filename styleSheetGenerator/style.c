#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

    FILE *out;
    out = fopen("out.css", "w");

    srand(time(NULL));
    char color[3];
    for (int i = 0; i < 3; i++) {
        int rand_ = rand()%256;
        if (rand_ < 16) {
            sprintf(&color[i], "0%x", rand_);
        } else {
            sprintf(&color[i], "%x", rand_);
        }
        printf("%d\n", rand_);
    };
    printf("Color: x%s%s%s", color[0], color[1], color[2]);


    char str_out[] =
        ".color1 {\n"
            "color: red;\n"
        "}\n"
        ".color2 {\n"
            "color: blue;\n"
        "}\n";

    fputs(str_out, out);
    fclose(out);
    return 0;
};
