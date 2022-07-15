// simple algerbric equation

#include<math.h>
#include<stdio.h>
int main()
{
    int a,b,c;
    float x1,x2;

    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    x1= (-b+(float)pow((b*b)-(4*a*c),0.5))/(2*a);
    x2= (-b-(float)pow((b*b)-(4*a*c),0.5))/(2*a);

    printf("Value of X1 and X2 is respectively:%d %d",x1,x2);

}