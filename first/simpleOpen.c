#include "Header.h"

int main(int argc, char* argv[])
{
	int fdes;
	printf("\n*******************************************\n");

	fdes=OpenFile(argv[1]);

	if(fdes==-1)
	{	
		printf("\nFailed to Open\n");
		printf("\n*******************************************\n");
	}
	else
	{
		printf("\nSuccessfully Open, file descriptor = %d\n",fdes);
		CloseFile(fdes);
		printf("\n*******************************************\n");
	}
	
	return 0;
}


int OpenFile(char* name)
{
	int fd=0,ret=0;
	char path[80];
	char defPath[]="/home/suraj/MOS_DS/";

	sprintf(path,"%s%s",defPath,name);

	fd=open(path,O_RDONLY);

	return fd;	
}

void CloseFile(int fd)
{
	close(fd);
}
