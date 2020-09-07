#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
for (; argc>0;argc--)
{
pid_t child_pid;
child_pid=fork();
    if (child_pid==0)
    {
    printf(" child process created\n");
    exit(0);//child process terminated meaning it is left in the process table and has to report to parent so it is cleared frpom the procces table 
    }
    else
    {
    printf("Parent process executing\n");
    sleep(3);//Parent sleeps so child cant report its status to the parent hence it left " as a zombie" 
    }
}
return 0;
}