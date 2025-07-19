#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>  // for time()
#include <stdbool.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int ComputerChoice);

int main(){
    srand(time(NULL)); // Seed the random number generator

    int userChoice;
    int computerChoice;
    int choice;
    bool userPreference;

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("\n");
    do
    {
        userChoice = getUserChoice();
        computerChoice = getComputerChoice();
        checkWinner(userChoice, computerChoice);

        printf("\nAre you want to try again (Yes: 1 , No: 0): ");
        scanf("%d", &choice);
        printf("\n");
        userPreference = choice;

    } while (userPreference);
    
    return 0;
}
int getComputerChoice(){
    int choice = rand() % 3 + 1;
    return choice;
}
int getUserChoice(){
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");
    return choice;
}
void checkWinner(int userChoice, int ComputerChoice){
    if (userChoice < 1 || userChoice >3) {
        printf("Invalid choice! Please select 1, 2, or 3.\n");
    }
    else if(userChoice == ComputerChoice){
        printf("It's a tie! You both chose the same.\n");
    }
    else if((userChoice == 1 && ComputerChoice == 3) ||
            (userChoice == 2 && ComputerChoice == 1) ||
            (userChoice == 3 && ComputerChoice == 2)){
                printf("Congratulations, You win\n");
            }
    else{
        printf("You lose! Better luck next time.\n");
    }
}