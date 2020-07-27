#include <stdio.h>

int main(void)
{
    int juice;
    int juice_num;
    int milk;
    int milk_num;
    int money;
    int payment;
    int change;
    double tax;

    juice = 198;
    juice_num = 1;
    milk = 138;
    milk_num = 2;
    money = 1000;
    tax = 1.05;

    payment = (int)((juice * juice_num + milk * milk_num) * tax);
    change = money - payment;

    printf("おつりは%d円\n", change);
    return 0;
}
