#include <stdio.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	printf("Address of env : %p\n", env[0]);
       printf("Address of environ : %p\n", environ[0]);	
       return(0);
}
