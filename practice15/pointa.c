#include <stdio.h>

void minmax(int *data, int *max, int *min);

int main(void)
{
    int i;
    int max;
    int min;
    int array[10];

    printf("0～100の範囲の整数値を複数入力せよ。\n");
    printf("入力要素の上限は10とする。\n");
    printf("-1が入力された場合入力終了とみなす。\n");

    for (i=0; i<10; i++) {
        printf("%dつ目の数字を入力してください\n", i + 1);
        scanf("%d", &array[i]);
        if (array[i] == -1) {
            break;
        }
    }

    minmax(array, &max, &min);
    printf("min:%d max:%d\n", min, max);
    return 0;
}

void minmax(int *data, int *max, int *min)
{
    int j;
    j = 0;
    *min = 100;
    *max = 0;

    while (data[j] != -1) {
        if (data[j] > *max) *max = data[j];
        if (data[j] < *min) *min = data[j];
        j++;
    }
    return;
}
