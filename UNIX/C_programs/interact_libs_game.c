#include <stdio.h>
#include <string.h>

int main() {

    char noun[30] = "";
    char verb[30] = "";
    char adjective[30] = "";
    char adjective_1[30] = "";
    char adjective_2[30] = "";
    char sign = '!';

    printf("Enter an adjective (description): ");
    fgets(adjective, sizeof(adjective), stdin);
    adjective[strlen(adjective) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective_1, sizeof(adjective_1), stdin);
    adjective_1[strlen(adjective_1) - 1] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective_2, sizeof(adjective_2), stdin);
    adjective_2[strlen(adjective_2) - 1] = '\0';

    printf("\nToday I went to a %s zoo.\n", adjective);
    printf("In a exhibition, I saw a %s%c\n", noun, sign);
    printf("%s was %s and %s%c\n", noun, adjective_1, verb, sign);
    printf("I was %s%c\n", adjective_2, sign);

    printf("\n%s\n%s\n%s\n%s\n%s\n", noun, verb, adjective, adjective_1, adjective_2);

    return 0;
};