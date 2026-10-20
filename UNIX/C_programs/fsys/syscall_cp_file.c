#include <stdio.h>
#include <unistd.h> // for write()
#include <fcntl.h>  // for open(); run command: man 2 open
#include <stdlib.h> // for exit()

int main(int argc, char *argv[])
{
    int in = open(argv[1], O_RDONLY);
    int out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0655); // 0655 is a file permission mode, stands for rwx-r-x-r-x, 0XXX to avoid confusion with decimal numbers
    char buffer[4096];
    ssize_t n; // signed integer type, for count of bytes or error indication; [0, SSIZE_MAX]

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <source> <destination>\n", argv[0]);
        return 1;
    }

    if (in == -1)
    {
        perror("open input");
        return 1;
    };

    if (out == -1)
    {
        perror("open output");
        close(in);
        return 1;
    };

    while ((n = read(in, buffer, sizeof(buffer))) > 0)
    {
        ssize_t q = 0;
        while (q < n)
        {
            ssize_t w = write(out, buffer + q, (size_t)(n - q));
            if (w <= 0)
            {
                perror("write");
                close(in);
                close(out);
                return 1;
            }
            q += w;
        }
    }

    if (n == -1)
    {
        perror("read");
        close(in);
        close(out);
        return 1;
    }

    close(in);
    close(out);

    return 0;
};