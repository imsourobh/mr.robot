// simple algerbric equation


#include<math.h>
#include<stdio.h>
int main()
{
    int flag=0, count=0; 
    float guess, root, test, error;

    printf("Initial Guess:");
    scanf("%f",&guess);


    while (flag)
    {
        count++;
        if (count<50)
        {
            test=(10-pow(guess,5));
            if (test>0)
            {
                root=pow(test,(1/2));
            }
        }
    }
    


}