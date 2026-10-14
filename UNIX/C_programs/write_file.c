#include <stdio.h>

/*
    fopen() - open file to write;
    fgets() - write text to the file;
    fprintf() - print text from written file;
    fclose() - close written file to free memory;
*/

int main()
{

    FILE *pFile = fopen("..//..//write_file.txt", "w"); // write in a root

    char text[100] = "";
    printf("What do I like to write?\n");
    fgets(text, sizeof(text), stdin); // write something in stdin

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1; // return error code
    }

    fprintf(pFile, "%s", text); // print just written text from written file

    printf("FILE RECORDED*\n");

    fclose(pFile);

    return 0;
};