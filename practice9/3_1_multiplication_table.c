#include <stdio.h>

int main (void)
{
    int i;
    int j;

    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            printf("%2d*%2d = %2d\n", i, j, i * j);
        }
    }
    return 0;
}
