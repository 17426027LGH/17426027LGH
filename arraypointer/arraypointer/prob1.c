#include <stdio.h> 
#include <string.h> 


void main(void)
{
    char password[100] = "aero2017";
    char a[100];
    while (1)
    {
        printf("Please enter your password. : ");
        scanf_s("%s", a, 100); 
        if (strcmp(password, a) == 0)
        {
            printf("normal termination. \n");
            break;
        }
        else if (strcmp(password, a) != 0)
            printf("not matched, retry.. \n");
       
    }

    return 0;
}