#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h> 
#include <stdlib.h>

pid_t fork (void);
pid_t vfork (void);
int clone (int (*fn)(void *), void *child_stack, int flags, void *arg);

char *args[] = {"ls", NULL};
// execvp() requires the last element to be NULL
int main() {
	int status;
	
	pid_t pid = fork();
	if (pid <0 ) {
		perror("fork failed");
	} else if (pid == 0) {
		execvp("ls", args);
	} else {
		waitpid(pid, &status, 0);
	}
};