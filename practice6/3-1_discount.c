#include <stdio.h>

int main(void)
{
    int list_price;
    double discount_10;
    double discount_30;
    double discount_50;
    double discount_80;

    discount_10 = 0.9;
    discount_30 = 0.7;
    discount_50 = 0.5;
    discount_80 = 0.2;

    printf("定価を入力してください\n");
    scanf("%d", &list_price);
    
    printf("定価は%d円です。\n", list_price);
    printf("1割引は%d円です。\n", (int)(list_price * discount_10));
    printf("3割引は%d円です。\n", (int)(list_price * discount_30));
    printf("5割引は%d円です。\n", (int)(list_price * discount_50));
    printf("8割引は%d円です。\n", (int)(list_price * discount_80));
}
