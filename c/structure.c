#include<stdio.h>

    struct abd{
        int a;
        char b;
        char c;
    } ;
int main()
{

    struct abd var;
    printf("%d",sizeof(var));
}