#include <stdio.h>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <sys/types.h>

int main() {
	pid_t pid = fork();

	if (pid == 0) {
		ptrace(PTRACE_TRACEME, 0, NULL, NULL);
		execl("/bin/ls", "ls", NULL);
	} else {
		int status;
		waitpid(pid, &status, 0);  // wait for 1st exec stop

		while(1) {
			ptrace(PTRACE_SYSCALL, pid, NULL, NULL); // before syscall
			waitpid(pid, &status, 0);
			if (WIFEXITED(status)) break;

			struct user_regs_struct regs;
			ptrace(PTRACE_GETREGS, pid, NULL, &regs);
			printf("syscall %lld\n", regs.orig_rax); // syscall num
			
			ptrace(PTRACE_SYSCALL, pid, NULL, NULL); // after syscall
			waitpid(pid, &status, 0);
			if (WIFEXITED(status))  break; 
		}
	}
	return 0;
}