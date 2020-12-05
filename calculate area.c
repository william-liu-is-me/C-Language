#include <stdio.h>
#define PI  3.1415926f  //dont think c as python: Pi = 3.1415, No =
int main()

{
    float radius;

    float diameter;
    float area;
    float circumference;

    printf("input the raidus of the table: ");
    scanf("%f",&radius);
    diameter = radius * 2;
    area = radius*radius*PI;
    circumference = diameter * PI;

    printf("Diameter is %10.4f, \nCiucumference is %10.4f, \nArea is %10.4f\n", diameter, circumference,area);
    return 0;


}
