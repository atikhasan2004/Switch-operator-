#include<stdio.h>
int main()
{
    char operators;
    float n1,n2;
    printf("Enter an operator (+,-,*,/): ");
    scanf("%c",&operators);
    printf("Enter first operand or value: ");
    scanf("%f",&n1);
    printf("Enter second operand or value: ");
    scanf("%f",&n2);
    switch(operators)
    {
        case'+': printf("%.2f+%.2f=%.2f",n1,n1,n1+n2);
        break;
        case'-': printf("%.2f-%.2f=%.2f",n1,n1,n1-n2);
        break;
        case'*': printf("%.2f*%.2f=%.2f",n1,n1,n1*n2);
        break;
        case'/': printf("%.2f/%.2f=%.2f",n1,n1,n1/n2);
        break;
        return 0;
    }
}
