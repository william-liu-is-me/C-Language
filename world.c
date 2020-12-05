#include <stdio.h> /* this is just comment, not code to compile */
//#include <stdlib.h> // this is also comment, but only one line
#define PER_FOOT 12
int main()
{
    int number_1 = 10;
    int number_2 = 3;
    float result = (float)number_1/number_2;
    printf("My total_income is %-10.3f", result);
    //printf("Address: 73 Ogston Cres.");
    return 0;
}
