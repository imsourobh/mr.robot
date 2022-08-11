#include<stdio.h>
int main()
{
    int i=1;
    int*q, *p=&i;
    q=p;
    *q=5;
    printf("%d",*p);
}