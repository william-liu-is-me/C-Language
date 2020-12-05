//a small project, game to guess number


#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char next_game = 'Y';
    const int Delay = 1;
    bool correct = true;
    int tries = 0;
    int digits = 0;
    time_t seed = 0

    printf("you are going to see some numbers, try to remember it!\n");
    //here we introduce the game


    do
    {
        correct = true;
        tries = 0;
        digits= 2;

        printf("Ready? Let's Roll!!!\n");
        //the numbers show up, by rand() function
        printf("These numbers only show up %d second%s\n",Delay, Delay == 1 ? "!" : "s!" );
        //it lasts for 2 seconds, then disappare from the screen
        printf("it is your turn to enter these numbers! each number should have a space after.\n");
        //scanf("");//input number
        //check if it is right
        //if yes, keep play, the right time plus 1,
        //if no, ask if continue
        while (correct)
        {   ++tries;
            srand(time(&seed));
            for (int i =1;i<= digits;++i)
                printf("%d\n",rand()%10);
            srand(seed);

            //statement to play the game
        }
        printf("do you still want to play?Y/N\n");
        scanf(" %c",&next_game);
        /*
        ENTER key press generates a \n, which is a vaild input for %c format
        specifier. Adding a space before %c tells scanf() to ignore all leading
         whitespace-like inputs (including that previously stored \n) and read
         the first non-whitespace character from stdin.

        As for the case with %d format specifier, it consumes (and ignores) any
        leading whitespace-like inputs before scanning for numeric inputs,
        so the second case does not suffer any issues.
        */

    }
    while (toupper(next_game)=='Y');
    printf("you dont want to play, byebye\n");

    return 0;
}
