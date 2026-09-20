#include <stdio.h>
#include <string.h>

int main() {

    char item[20] = "";
    int quantity = 0;
    float price = 0.0f;
    char currency = '$';
    float totalPrice = 0.0f;

    printf("Which product you would like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price forEach?: ");
    scanf("%f", &price);

    printf("How many you would like to buy?: ");
    scanf("%d", &quantity);

    totalPrice = price * quantity;
    printf("You have bought: %d %s/s\nTotal price is: %c%.2f\n", quantity, item, currency, totalPrice);

    return 0;
};
