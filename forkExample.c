
#include <stdio.h>
#include <unistd.h>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]){

	pid_t pid;
	printf("This is the beggining\n");
	pid = fork();

	if(pid == 0)
	{
		for(int i = 0; i < 10; i++)
		{	
			printf("I am the child with PID: %d my count is: %d\n", pid, i);
			sleep(1);
		}
		

	}
	if(pid > 0)
	{
		for(int i = 0; i < 10; i++)
		{
			printf("I am the parent with PID: %d my count is: %d\n", pid, i);
			sleep(1);
		}
		
	}
	if(pid < 0)
	{
		printf("fork failed\n");
	}

  return 0;
}