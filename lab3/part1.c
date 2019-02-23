//Orphan Example
//The child process is adopted by init process, when parent processes die
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	int pid = fork();
	int x;
	
	if(pid > 0) // anything other than 0 is the parent process
	{
		printf("This is a PARENT process! Let's kill it\n");
		exit(EXIT_SUCCESS); //kills the parent
	}	
	else if(pid == 0) //0 indicates the child process
	{
		printf("A child process is born!\n");
		if(setsid < 0) {exit(EXIT_FAILURE);}
		umask(0);
		if(chdir("/") < 0) 
		{
			mkdir("/home/david/test1", S_IRUSR | S_IWUSR | S_IXUSR);
			exit(EXIT_FAILURE);
		}

		sleep(10);
		for(x = sysconf(_SC_OPEN_MAX); x >=0; x--)
		{
			close(x);
		}
	}

	return 0;
}