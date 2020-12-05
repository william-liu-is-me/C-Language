 #include <stdio.h>
int main()
{
    char first = 'A';
    char second = 'B';
    char last = 'Z';
    char words[] = "isnt it nice?";
    char number = 40;

    char result1 = first + 2;
    char result2 = second - 1;
    char result3 = last + 2;
    char full_name[5];

    printf("give me a name:\n");
    fgets(full_name,5,stdin);//new function to learn fgets (variable,size,method)

    printf("character values %-5c%-5c%-5c\n", result1,result2,result3);
    printf("numerical values %-5d%-5d%-5d\n", result1,result2,result3);
    printf("the number %d is the character %5c\n", number,number);
    printf("the words is going to be: %s\n", words);
    printf("the name you put is: %s\n", full_name);
    return 0;
}
