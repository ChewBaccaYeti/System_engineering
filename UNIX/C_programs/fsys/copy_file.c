#include <stdio.h>
#include <stdlib.h>

/*
    fopen() - open file to read/write; [file_open]
    fgets() - write text to the file through stdin; [file_get_string]
    fgetc() - reads one character from file, auto-moves file pointer forward to the next character, stops when End_Of_File is reached (EOF);
    fputc() - writes one character to a file and the current file pointer position & moves pointer forward after;
    fprintf() - print text from written file through stdin; [print_file]
    fclose() - close written file to free memory; [file_close]
*/

int main()
{

    FILE *pFile_1, *pFile_2;
    char filename[128];
    int cp;

    printf("Enter the filename to open for reading: ");
    scanf("%s", filename);

    pFile_1 = fopen(filename, "r");
    if (pFile_1 == NULL)
    {
        printf("\nCOULD_NOT_OPEN_FILE_%s*\n", filename);
        exit(1);
    }

    printf("Enter the filename to open for writing: ");
    scanf("%s", filename);

    pFile_2 = fopen(filename, "w");
    if (pFile_2 == NULL)
    {
        printf("\nCOULD_NOT_OPEN_FILE_%s*\n", filename);
        exit(1);
    }

    while ((cp = fgetc(pFile_1)) != EOF)
    {
        fputc(cp, pFile_2);
    };

    printf("File content copied to %s\n: ", filename);

    fclose(pFile_1);
    fclose(pFile_2);

    return 0;
};