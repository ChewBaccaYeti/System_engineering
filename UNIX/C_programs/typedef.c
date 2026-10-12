#include <stdio.h>

typedef int Number;
typedef char String[50]; // 50 bytes size
typedef char Initials[4];

int main()
{
    // typedef = is a reserved keyword that gives an existing datatype a "nickname"
    // typedef existing_type new_name;

    Number x = 3;     // int
    Number y = 4;     // int
    Number z = x + y; // int

    String name = "Venedykt Mitishov!";

    Initials spongeBobSquarepants = "SS\0";
    Initials patrickStar = "PS\0";
    Initials squidwardTentacles = "ST\0";
    Initials sandyCheecks = "SC\0";

    printf("%d", z);
    printf("\nMy name is %s", name);

    printf("\nMy cool friends: %s %s %s %s.", spongeBobSquarepants, patrickStar, squidwardTentacles, sandyCheecks);

    return 0;
};
