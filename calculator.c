#include <stdio.h>

// a calculator

int main()
{
    double number1;
    double number2;
    char operator;

    while (1)
    {
    printf("please input your calculation:\n");
    scanf("%lf%c%lf",&number1,&operator,&number2);
    //printf("%lf%c%lf\n",number1,operator,number2);
    switch (operator)
    {case '+':
        printf("%lf%c%lf = %lf\n",number1,operator,number2,number1+number2);
        break;
    case '-':
        printf("%lf%c%lf = %lf\n",number1,operator,number2,number1-number2);
        break;
    case '*':
        printf("%lf%c%lf = %lf\n",number1,operator,number2,number1*number2);
        break;
    case '/':
        if (number2 == 0)
            printf("the second number cannot be zero, zerodivision error!\n");
        else printf("%lf%c%lf = %lf\n",number1,operator,number2,number1/number2);
        break;
    case '%':
        if ((long)number2 ==0)
            printf("the second number cannot be zero, zerodivision error!\n");
        else printf("%f%c%f = %ld\n",number1,operator,number2,(long)number1%(long)number2);
        break;
    }}
    return 0;

}
