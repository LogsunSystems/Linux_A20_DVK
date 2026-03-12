/**
 * Title: Create Multiple Processes
 * Brief: The program does following tasks
 *          - Crete two child processes
 *          - Assign them pre-compiled executable file to run
 *          - Wait till the both child process complete their life-cycle
 * Company: Logsun Systems
 * Date: 12-03-2026
 * Author: Shreyas Deshpande
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    pid_t p1, p2;

    p1 = fork(); // Create Process-1
    if (p1 == 0)
    {
        execl("./process_1", "process1", NULL); // Assign Executable file to the process-1

        perror("Failed to execute process-1");
        return 1;
    }

    p2 = fork();
    if (p2 == 0)
    {
        execl("./process_2", "proces2", NULL);

        perror("Failed to execute process-2");
        return 1;
    }

    waitpid(p1, NULL, 0); // Wait until process-1 gets finish it's execution.
    waitpid(p1, NULL, 0);
    return 0;
}
