#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize the random number generator
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Using do-while loop
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);

        if (guessed > randomNumber)
        {
            printf("Small number please\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Large number please\n");
        }

        no_of_guesses++;
    } while (guessed != randomNumber); // Correct placement of while condition

    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}
