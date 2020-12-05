#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
{   for(int i = 0;; ++i)
    {
    if (i == 10)
    {
        printf("%d\n",i+99 );
        break;

    }
    else
        printf("%d\n", i);
    }
    printf("I am out side of loop\n");
    srand(time(NULL));
    printf("%d\n",1+rand()%3 );
    return 0;
}
*/

/*斐波那契数列c语言版本
{

    int a = 0;
    int b = 1;
    int d = 0;
    for (int i = 0; i < 20; ++i)
    {

        d = b;
        b = a+b;
        a = d;
        printf("C:%d,%d\n",i,b );
    }
    return 0;

}
*/
//goto!can jump from inner loop directly to outsize

/*
{
    for (int i = 1; i < 3; ++i)
    {
        int j = 0;
        while (j<3)
            {
            printf("%d\n",j);
            j = j+1;
            if (j == 2)
                goto out;
            }
    };
    out: printf("i am out\n");
    return 0;
}
*/
//do while check the condition after the code block runs
/*{
    char result = 'y';
    do
    {
        scanf(" %c",&result);
        printf("%c\n",result);
    }
    while (result == 'y');
    return 0;
}*/

