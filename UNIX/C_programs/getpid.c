#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>    

int main() {
	int status; 
	pid_t pid;

	pid = fork();

	if (geteuid() == 0) {
		printf("Running as root\n");
	}

	printf("Current process, pid is: %d\n", pid=getpid());
	printf("Parent process, ppid is: %d\n", getppid());
	printf("Group process, pgid is: %d\n", getpgrp());
	printf("Session process, sid is: %d\n", getsid(pid));
	printf("Process real user uid, uid is: %d\n", getuid());
	printf("Process real group gid, gid is: %d\n", getgid());
	printf("Process effective user euid, euid is: %d\n", geteuid());
	printf("Process effective group egid, egid is: %d\n", getegid());

	if ((pid) < 0) {
		perror("fork");
		return 1;
	} else if (pid == 0) {
		printf("Child process, pid is: %d\n", pid=getpid());
		printf("Parent process, ppid is: %d\n", getppid());
		printf("Group process, pgid is: %d\n", getpgrp());
		printf("Session process, sid is: %d\n", getsid(0));
		printf("Process real user uid, uid is: %d\n", getuid());
		printf("Process real group gid, gid is: %d\n", getgid());
		printf("Process effective user euid, euid is: %d\n", geteuid());
		printf("Process effective group egid, egid is: %d\n", getegid());
		execl("/bin/ls", "ls", NULL);
		perror("execl:"); 
		return 1;
	}

	if (pid > 0) {
		printf("Parent waits child, returned pid: %d\n", wait(&status));
		printf("Child status is: %d\n", status);
		return 0;
	}
}
