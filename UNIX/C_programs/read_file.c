#include <stdio.h>

int main()
{

    FILE *pFile = fopen("..//..//write_file.txt", "r");
    char buffer[1024] = {0};

    if (pFile == NULL)
    {
        printf("\nCOULD_NOT_OPEN_FILE*\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    };

    printf("\nFILE READ*\n");

    fclose(pFile);

    return 0;
};