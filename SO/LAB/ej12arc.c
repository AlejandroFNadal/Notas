#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(){
	int descriptor=0;
	char *texto="Estoy redireccionando la salida\0";
	descriptor=open("exit.txt",O_WRONLY | O_CREAT |S_IWUSR);
	write(descriptor,texto,strlen(texto));
	close(descriptor);
	return 0;
	}
