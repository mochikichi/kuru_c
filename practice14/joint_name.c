#include <stdio.h>
#include <string.h>

int main (void)
{
    char last_name[256];
    char first_name[256];

    printf("名字を入力してください\n");
    scanf("%s", last_name);
    printf("名前を入力してください\n");
    scanf("%s", first_name);
    printf("last_name:%s\n", last_name);
    printf("first_name:%s\n", first_name);
    strcat(last_name, first_name);
    printf("full_name:%s\n", last_name);
    return 0;
}
