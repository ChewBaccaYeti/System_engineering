#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define  usage "usage: file_name [-incr | -n incr] command \n"

int main(int argc, char **argv) {
    int incr;
    int argnumb;

    if (argc < 2) {
        fprintf(stderr, usage); exit(1);
    };

    if (argv[1][0] !='-') {
        incr=10;
        argnumb=1;
    } else if (argv[1][1] == 'n') { // superuser
        if (getuid() !=0) {
            fprintf(stderr, "Not a superuser!\n"); 
            exit(1);
        };
        incr=-(atoi(argv[2]));
        argnumb=3;
    } else {
        incr=atoi(&argv[1][1]);
        argnumb=2;
    };

    if (argc != argnumb +1) {
        fprintf(stderr, usage);
        exit(1);
    };
    nice(incr);
    execvp(argv[argnumb], &argv[argnumb]);
    perror("execvp");
    exit(1);
};