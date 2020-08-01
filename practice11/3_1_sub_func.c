#include <stdio.h>

int check_season (int i);

int main (void)
{
    int year;

    printf("西暦年を入力してください、オリンピック開催シーズンを判定します\n");
    scanf("%d", &year);
    switch (check_season(year)) {
        case 0:
            printf("開催なし\n");
            break;
        case 1:
            printf("夏\n");
            break;
        case 2:
            printf("冬\n");
            break;
        }
    return 0;
}

int check_season (int i)
{
    if (i % 2 != 0) {
        return 0;
    } else if (i % 4 == 0) {
        return 1;
    } else {
        return 2;
    }
}
