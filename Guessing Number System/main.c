#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); 
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guess;

    printf("Welcome to the Number Guessing Game!\n");

    do {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);

        no_of_guesses++;

        if (guess > random_number) {
            printf("Lower number, please!\n");
        } 
        else if (guess < random_number) {
            printf("Higher number, please!\n");
        } 
        else {
            printf("Congrats you passe!! You guessed the number in %d attempts.\n", no_of_guesses);
        }
    } while (guess != random_number);

    return 0;
}