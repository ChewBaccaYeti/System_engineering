#include <sys/types.h>
#include <unistd.h>

pid_t fork (void);
pid_t vfork (void);
int clone (int (*fn)(void *), void *child_stack, int flags, void *arg);

pid_t = fork()
if (pid <0 ) {
	perror("fork failed");
} else if (pid == 0) {
	execvp("ls", args);
} else {
	waitpid(pid, &status, 0);
}