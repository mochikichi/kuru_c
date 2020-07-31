#include <stdio.h>

int main (void)
{
    int score;

    do {
        printf("テストの点数を入力してください\n");
        scanf("%d", &score);
    } while (score < 0 || score > 100);
    printf("入力した点数：%d\n", score);
    return 0;
}
