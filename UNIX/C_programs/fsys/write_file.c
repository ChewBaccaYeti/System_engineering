#include <stdio.h>

/*
    fopen() - open file to write;
    fgets() - write text to the file;
    fprintf() - print text from written file;
    fclose() - close written file to free memory;
*/

int main()
{

    char filename[128];
    printf("Enter the filename to open for writing: ");
    scanf("%s", filename);

    FILE *pFile = fopen(filename, "w"); // write in the root
    char text[128] = {0};               // buffer

    printf("What do I like to write?\n");
    fgets(text, sizeof(text), stdin); // write text in stdin

    if (pFile == NULL)
    {
        printf("COULD_NOT_WRITE_FILE*\n");
        return 1; // return error code
    }

    fprintf(pFile, "%s", text); // print just written text from written file

    printf("\nFILE RECORDED*\n");

    fclose(pFile);

    return 0;
};