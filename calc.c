#include <stdio.h>

int main()
{
    float num1;
    float num2;
    char op;
    float total;
    printf("Hello this is calculator!");
    printf("\nEnter a number: ");
    scanf("%f",&num1);
    printf("Enter the operator: ");
    scanf(" %c",&op);
    printf("Enter another number: ");
    scanf("%f",&num2);

switch(op){
case '+': total = num1 + num2;
break;
case '-': total = num1 - num2;
break;
case '*': total = num1 * num2;
break;
case '/': total = num1 / num2;
break;
}

printf("\n%.2f %c %.2f = %.2f\n", num1, op, num2, total);
return 0;
}
