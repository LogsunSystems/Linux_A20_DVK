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

#include <stdio.h>// For printf() and perror()
#include <unistd.h>// For fork() and execl()
#include <sys/wait.h>// For waitpid()

int main(void)
{
    pid_t p1, p2;// Declare variables to store process IDs of child processes

    p1 = fork(); // Create Process-1
    if (p1 == 0)// If fork() returns 0, we are in the child process
    {
        execl("./process_1", "process1", NULL); // Assign Executable file to the process-1

        perror("Failed to execute process-1");// If execl() returns, it means there was an error
        return 1; // Exit with an error code
    }

    p2 = fork();// Create Process-2
    if (p2 == 0)// If fork() returns 0, we are in the child process        
    {
        execl("./process_2", "proces2", NULL);// Assign Executable file to the process-2

        perror("Failed to execute process-2");// If execl() returns, it means there was an error
        return 1;// Exit with an error code
    }

    waitpid(p1, NULL, 0); // Wait until process-1 gets finish it's execution.
    waitpid(p1, NULL, 0);// Wait until process-2 gets finish it's execution.
    return 0;// Exit with success code
}
