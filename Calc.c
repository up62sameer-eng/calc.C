#include <stdio.h>
void main()
{
int num1;
int num2;
char op;
printf("enter the first number\n");
scanf("%d",&num1);
printf("enter the second number\n");
scanf("%d",&num2);
printf("enter the operator");
scanf(" %c",&op);
switch(op)
    {
        case'+':
          printf("result is:- %d",a+b);
             break; 
        case'-':
         printf("result is:- %d",a-b);
            break;
        case'*':
          printf("result is:- %d",a*b);
            break;
        case'/':
          printf("result is:- %d",a/b);
            break;
        default:
             printf("Invalid number");
    }
}