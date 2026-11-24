// I make the game of guesses

#include <stdio.h>
#include <stdlib.h> // provide general purpose function such as rand(),srand(),etc
#include <time.h>   //provide time related function such as time(NULL) which provide current time
int main()
{
    // intialize random number generator,seed rand() using the current time
    srand(time(NULL)); // time(NULL) is passed as a seed argument to srand() that changes every second
    
    /*srand() and rand() work together:

     srand(seed) initializes the random-number generator.
     rand() generates numbers from the sequence created using that seed.*/

    // generate number between 0 & 100
    int randomnumber = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed;
    // Atleast one time we have to do guessing
    do
    {
        printf("Guess the number:");
        scanf("%d", &guessed);
        if (guessed > randomnumber)
        {
            printf("Lower number please:\n");
        }
        else if (guessed < randomnumber)
        {
            printf("Higher number please:\n");
        }
        else
        {
            printf("you guessed correctly ! \n");
        }

        number_of_guesses++;
    } while (guessed != randomnumber);
    printf("You guessed the number in %d guesses.", number_of_guesses);
    return 0;
}