#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int guessed,num_of_guesses = 0;

    do {
        printf("Guess the number: ");
        scanf("%d",&guessed);
        if (randomNumber < guessed) {
            printf("Try Lower!\n");
        }else if (randomNumber > guessed) {
            printf("Try Higher!\n");
        }else {
            printf("Congrats!!");
        }
        num_of_guesses++;
    } while (guessed != randomNumber);

    printf("Your guess count is: %d\n",num_of_guesses);

    return 0;
}
