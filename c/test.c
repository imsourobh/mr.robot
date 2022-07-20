#include<stdio.h>

int main()
{
    char lower(char c1);
    {
        char c2;
        c2=(c1>='a' && c1<='z') ? ('A'+c1 -'a') :c1;
        return(c2);
    }

    char n[10]="hello";
    printf("%s",lower(n));
}