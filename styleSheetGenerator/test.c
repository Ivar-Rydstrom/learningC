#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void shuffle(int *array, size_t n)
{
    if (n > 1) 
    {
        size_t i;
        for (i = 0; i < n - 1; i++) 
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = array[j];
          array[j] = array[i];
          array[i] = t;
        }
    }
}

int main() {
    char out[1000];
    srand(1002645);
    for (int i; i<100; i++) {
        char line[4];
        int rand_ = rand()%256;
        if (rand_ <= 16) {
            sprintf(line, "0x0%x\n", rand_);
        } else {
            sprintf(line, "0x%x\n", rand_);
        };
        
        strcat(out, line);
    };
    shuffle(*out, sizeof(out));
    printf("%s", out);

    return 0;
};
