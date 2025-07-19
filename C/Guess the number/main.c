#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>  // for time()

int main() {
    int number, guess, attempts = 0;

    int max = 100;
    int min = 50;
    
    srand(time(NULL));
    number = rand() % (max - min +1) + min; 

    printf("Guess the number between %d and %d: \n", min , max);

    do{
        scanf("%d", &guess);
        attempts++;
        
        if (guess < number){
            printf("Too low! try again.\n");
        }
        else if (guess > number){
            printf("Too high! try again.\n");
        }
        else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
            break;
        }
    }while(guess != number);

    return 0;
}