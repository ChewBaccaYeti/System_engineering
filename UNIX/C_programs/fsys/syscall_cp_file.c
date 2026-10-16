#include <stdio.h>
#include <unistd.h> // for write()
#include <fcntl.h>  // for open(); run command: man 2 open

int main()
{

    char filename[128];
    int in = open(filename, O_RDONLY);
    if (in == -1)
    {
        perror("open input");
        return 1;
    };

    int out = open(filename, O_CREAT | O_EXCL | O_WRONLY | O_TRUNC, 755); // 755 is a file permission mode, stands for rwx-r-x-r-x
    if (out == -1)
    {
        perror("open output");
        close(in);
        return 1;
    };

    char buffer[4096];
    ssize_t n; // signed integer type, for bytes count or error indication; [-1, SSIZE_MAX]

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
    }

    close(in);
    close(out);

    return 0;
};