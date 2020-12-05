#include <stdio.h>

int main()
/*
{
    const double discount1 = .05;
    const double discount2 = .1;
    const double discount3 = .15;
    const double unit_price = 10 ;
    double total_price = 0.0;

    int quantity = 0;
    printf("please input the quantity you wanna purchase:\n");
    scanf("%d",&quantity);
    total_price = quantity * unit_price * (1 - (quantity > 30 ? discount3:(
        quantity>20 ? discount2:
        (quantity>10 ? discount1:0))));
    printf("the total price is going to be %f\n", total_price);
}
*/
{
    int number = 0 ;
    printf("please insert your lucky number:\n");
    scanf("%d",&number);
    switch (number)
    {
        case 1:printf("your number is %d\n",number);
        break;
        case 2: printf("your number is %d\n",number);
        break;
        default: printf("you didnt win this. Try next time!\n");
            //interesting, new stuff
    }
    return 0;
}
