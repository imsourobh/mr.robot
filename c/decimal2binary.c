#include<stdio.h>
int main()
{
    int n, mod,i=1, bin=0;

    printf("Enter a integer decimal type number: ");
    scanf("%d",&n);
    while(n!=0){
        mod=n%2;
        bin+=mod*i;
        i*=10;
        n=n/2;
    }
    printf("\nThe binary equivalant is: %d",bin);
}