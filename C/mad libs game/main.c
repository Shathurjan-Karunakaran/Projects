#include<stdio.h>
#include<string.h>

int main(){
    // MAD LIBS GAME

    char noun[50]= "";
    char verb[50]= "";
    char adj1[50]= "";
    char adj2[50]= "";
    char adj3[50]= "";

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strcspn(noun, "\n")] = 0; // Remove newline character from input

    printf("Enter a verb (ending w/ ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = 0; // Remove newline character from input

    printf("Enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strcspn(adj1, "\n")] = 0; // Remove newline character from input

    printf("Enter an adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strcspn(adj2, "\n")] = 0; // Remove newline character from input

    printf("Enter an adjective (description): ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strcspn(adj3, "\n")] = 0; // Remove newline character from input

    return 0;
}