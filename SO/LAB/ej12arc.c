#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(){
	int descriptor=open("exit.txt",O_WRONLY | O_CREAT | S_IWUSR);
	char *texto="Estoy redireccionando la salida";
	write(descriptor,texto,strlen(texto));
	close(descriptor);
	return 0;
	}
