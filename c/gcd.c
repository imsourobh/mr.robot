#include<stdio.h>
int main()
{
    int n, n1, n2, i=0, gcd;
    printf("Enter two positive integer number: ");
    scanf("%d%d", &n1,&n2);

    if (n1==n2){
        gcd=n1; 
        goto ans_gcd;
    }
    else if (n2<n1);{
        n=n1; 
        n1=n2; 
        n2=n;
    }

    
    do{
    i++;
    if (n2%(n1/i)==0) gcd=n1/i;
    }while(n2%(n1/i)!=0);
    ans_gcd:
    printf("gcd of %d and %d is: %d", n1, n2, gcd);   

}