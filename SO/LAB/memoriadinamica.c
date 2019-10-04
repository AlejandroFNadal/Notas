#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define A_MEGABYTE (1024*1024)
#define PHY_MEM_MEGS 16384

int main()
{	
	char *memoria;
	size_t size_to_allocate =A_MEGABYTE;
	int megs_obtained =0;
	while(megs_obtained < 100*PHY_MEM_MEGS)
	{	
		memoria=(char *)malloc(size_to_allocate);
		if (memoria != NULL)
		{
			sprintf(memoria,"Hola mundo");
			megs_obtained++;
			printf(" %s  ahora asignados %d Mb\n",memoria,megs_obtained);
		}
	}
	return 0;
}
