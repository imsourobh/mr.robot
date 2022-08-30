
#include<stdio.h>
int main()
{
    int n, n1, n2, i=0, lcd;
    printf("Enter two positive integer number: ");
    scanf("%d%d", &n1,&n2);

    if (n1==n2){
        lcd=n1; 
        goto ans_lcd;
    }

    else if (n2>n1);{
        n=n1; 
        n1=n2; 
        n2=n;
    }

    do{
        i++;
        if((n1*i)%n2==0)
            lcd=n1*i;
    }while((n1*i)%n2!=0);

    ans_lcd:
    printf("lcd of %d and %d is: %d", n1, n2, lcd);


}