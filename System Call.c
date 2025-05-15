#include <stdio.h>
 
#include <unistd.h>
 
int main() {
 
    pid_t parent_pid = getppid();
 
    printf("The parent process ID is: %d\n", parent_pid);
 
    return 0;
 
}
 
