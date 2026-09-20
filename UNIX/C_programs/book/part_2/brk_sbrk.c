/* Example    : pr2-7
 * Description: Demonstrates brk and sbrk system calls.
 * Edited by  : Georgi D. Sotirov, gdsotirov@gmail.com
 */

#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

// int brk(void *endds);
// void *sbrk(int incr);

char *last_addr;
int i;
call_numb = 0;

void signal_handler(int sig_numb) { // signal handling
    char ch;

    call_numb++;

    printf("signal_handler(signal %d) - %dth call at address %p\n", sig_numb, call_numb, (void *)last_addr);
    puts("Exit process [y/n]? ");

    switch (ch = getchar()) { // terminate proc
    case 'y':
        exit(0);
    default:
        printf("%c\n", ch);
        break;
    };

    getchar();
    sbrk(512); // set 512 memory bytes
};

int main(void) {
    signal(SIGSEGV, signal_handler); // set reaction
    last_addr = (char *)sbrk(0);

    printf("Original break value: %p\n", last_addr);

    for (;;) {
        i = i + 1;
        last_addr += 1;
        *last_addr = 'a';

        printf("Last address = %p value = %c i = %d\n", last_addr, *last_addr, i);
    };

    return 1;
};
