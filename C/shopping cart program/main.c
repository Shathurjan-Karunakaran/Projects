#include<stdio.h>
#include<string.h>

int main(){
    // SHOPPING CART PROGRAM

    char item[50]= "";
    int quantity = 0;
    float price = 0.0f;
    float total = 0.0f;
    char currency = '$';

    printf("Enter the item name to buy: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = 0; // Remove newline character from input

    //item[strlen(item -1)] = '\0'; 
    // Remove newline character from input
    // here we are using strlen to get the length of the string and then subtracting 1 to remove the newline character.
    // it doesn't look for there is a newline character at the end of the string, it just removes the last character.
    
    printf("Enter the price of %s: %c", item, currency);
    scanf("%f", &price);

    printf("Enter the quantity of %s: ", item);
    scanf("%d", &quantity); 

    total = price * quantity;

    printf("Total cost for %s is: %c%.2f\n", item, currency, total);

    return 0;
}