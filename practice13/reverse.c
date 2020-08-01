#include <stdio.h>

int main (void)
{
    int array[10];
    int i;
    int j;
    int k;
    int size;

    size = sizeof(array) / sizeof(array[0]);
    for (i=0; i < size; i++){
        scanf("%d", &array[i]);
    }
    for (j=0; j < size; j++) {
        printf("array[%d]:%d\n", j, array[j]);
    }
    for (k=size-1; k >= 0; k--) {
        printf("array[%d]:%d\n", k, array[k]);
    }
    return 0;
}
