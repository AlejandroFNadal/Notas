#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	printf("Hola mundo\n");
	int x=1;
	if(fork()==0)
	{
		printf("Soy el hijo, x=%d\n",x);
	}
	else
	{
		x=33;
		printf("Soy el padre, x=%d\n",x);
	}

	//system(" ls -l /usr/include/*.h");
	//execl("/bin/ls","ls","-l","/usr/include",0);
	char *tira[] =  {"ls","-l","/usr/include",0};
	//execv("/bin/ls",tira);
	//execvp("ls",tira);
	getchar();
	return 0;
}
