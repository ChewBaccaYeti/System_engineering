#include <stdio.h>
#include <string.h>

int main()
{

    int age = 0;
    bool anAdult = false;
    char name[10] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your name: ");
    scanf("%s", &name);
    // fgets(name, sizeof(name), stdin);

    if (age >= 18)
    {
        anAdult = true;
        if (true)
        {
            printf("You are an adult. And it is time to pay your pointless taxes, lol.\n");
        };

        if (strlen(name) == 0)
        {
            printf("You did not print your name.");
        }
        else
        {
            printf("Your name is: %s\n", name);
        };
    }
    else
    {
        printf("Yo, kiddo, go touch the grass and play with pokemons.\n");
    };

    return 0;
};