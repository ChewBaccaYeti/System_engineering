#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
	pid_t pid = fork();

	if (pid < (pid_t)0) {
		printf("Unable to create a child process.\n");
		return 1;
	} else if (pid > (pid_t)0) {
		printf("The parent is running.\n");
		return 0;
	} else if (pid == (pid_t)0) {
		printf("The child is running.\n");
		execl("/usr/bin/who", "who", NULL)
		perror("execl: ");
		return 2;
	} else if (pid == 0) {
		char *args[] = {"ls", "-la", "/tmp", NULL};
		execvp("ls", args);
		perror("exec");
		_exit(127);
	}
	waitpid(pid, NULL, 0);
	return 0;
} 

int spawn(void) {
	pid_t pid = fork();

	if (pid < (pid_t)0) {
		printf("Unable to create a child process.\n");
		return 1;
	} else if (pid > (pid_t)0) {
		printf("The parent is running.\n");
		return 0;
	} else if (pid == (pid_t)0) {
		printf("The child is running.\n");
		execlp("/usr/bin/ls", "ls -la", NULL)
		perror("execl: ");
		return 2;
}