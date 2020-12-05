#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number1 = 5;
    int number2 = 3;
    int number3 = 1;

    if (number1>number3 && 3 > 1 )// && == and, || == or;
    {   printf("%d is greater than %d\n", number1,number3);
        if (number1 < number2)
            printf("number2, %d is the biggest\n",number2 );
        else
            printf("number1, %d is the biggest\n",number1 ),  //代码块内部用逗号隔开就等于python在一个缩紧之内
            printf("wo cao your ma\n");
    } //代码块用大括号包裹，条件表达式要在大括号外面
    else
        printf("%d is not greater than %d\n", number1,number3);

    return 0;
}


