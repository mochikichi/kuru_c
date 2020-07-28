#include <stdio.h>

int main(void)
{
    int year;

    printf("西暦年を入力してください\n");
    scanf("%d", &year);

    if(year % 4 == 0) printf("%d年は夏季オリンピック開催年です\n", year);
    if(year % 4 != 0 && year % 2 == 0) printf("%d年は冬季オリンピック開催年です\n", year);
    if(year % 2 != 0) printf("%d年はオリンピック開催年ではありません\n", year);
    return 0;
}
