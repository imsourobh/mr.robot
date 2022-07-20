#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char name[20];
    int count, countback, loop=1;

    while(loop==1)
    {
        printf("\n enter ");
        scanf("%s",&name);r
        
        for (count=0, countback=strlen(name)-1; count<=(strlen(name)-1); count++, countback--)
        {
            if (name[count]==' ' || name[count]=='.' || name[count]==',' || name[count]=='/')
            continue;

            else if (toupper(name[count])!=toupper(name[countback])){
                printf("Not palindrome");
                loop=2;
                break;
            }
        }
        if (count==strlen(name))
        {loop=2;

    
        printf("Palindrome");
        }
    }
}
