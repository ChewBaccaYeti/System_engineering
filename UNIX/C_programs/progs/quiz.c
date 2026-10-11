#include <stdio.h>
#include <ctype.h> // for convertiang lowerCase to upperCase

int main()
{

    char questions[][100] = {
        "What is the largest planet in the solar system?",
        "What is the hottest planet?",
        "What planet has the most moons?",
        "Will I be happy and nobody going to hurt me again?"};
    char options[][100] = {
        "\nA. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
        "\nA. Mercury\nB. Venus\nC. Earth\nD. Mars",
        "\nA. Earth\nB. Mars\nC. Saturn\nD. Jupiter",
        "\nA. Yes\nB. Yes\nC. Yes\nD. Yes",
    };
    char answerKey[] = {
        'A',
        'B',
        'C',
        'D',
    };

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0, i;

    printf("\n*** QUIZ GAME ***\n");

    for (i = 0; i < questionCount; i++)
    {
        printf("\n%s\n", questions[i]);
        printf("%s\n", options[i]);
        printf("Enter your option: ");
        scanf(" %c", &guess);
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            printf("*CORRECT!\n");
            score++;
        }
        else
        {
            printf("*WRONG!\n");
        }
    }
    return printf("\nYour score is %d out %d points!\n", score, questionCount);

    return 0;
};