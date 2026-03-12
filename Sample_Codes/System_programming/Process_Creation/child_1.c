#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    unsigned int pid = 0, ppid = 0;

    pid = getpid();
    ppid = getppid();

    printf("This is process-1 with PID [%u] and PPID [%u]\r\n\r\n", pid, ppid);

    return 0;
}
