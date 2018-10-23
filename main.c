#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    float a,b,d;
    char c;
    int f;


    printf("Enter your operation\n");
    c=getchar();
    if(c!='+'&&c!='-'&&c!='*'&&c!='/'&&c!='^'&&c!='%')
    {
    printf("That's not a valid operation\n");
    return 0;

    }


    printf("Enter the 1st value\n");
    scanf("%f",&a);

    printf("Enter the 2nd value\n");
    scanf("%f",&b);



    switch(c)
    {
    case '+':
        d=a+b;
    printf("The addition is %f",d);
    break;

    case '-':
        d=a-b;
        printf("The subtraction is %f",d);
    break;

    case '*':
        d=a*b;
        printf("The multiplication  is %f",d);
    break;

    case '/':
        d=a/b;
        printf("The division  is %f",d);
    break;

    case '^':
        f=a;
        for(int i=1;i<b;i++)
        f=a*f;
        printf("%f to the power of %f is %d",a,b,f);
    break;

    case '%':
        d=(int)a%(int)b;
        printf("The remainder is %f",d);
    break;



    default:
    printf("You entered wrong\n");

    }

        return 0;
}
