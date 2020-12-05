#include <stdio.h>

int main()
{
    int number[1];
    int count = 3;
    int sum = 0;
    float average =0.0;

    printf("enter the %d numbers\n",count );
    for (int i = 0; i < count; ++i)
    {
        printf("%2d> ",i+1);
        scanf("%d",&number[i]);
        sum += number[i];
    };
    average = (float)sum/count;
    printf("%.3f\n",average );

    return 0;
}
