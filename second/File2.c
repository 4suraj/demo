#include "Header.h"

int main(int argc, char* argv[])
{
	int fdes;

	fdes=OpenFile(argv[1],argv[2]);

	if(fdes==-1)
		printf("\nFailed to Open\n");
	else
	{
		printf("\nSuccessfully Open, file descriptor = %d\n",fdes);
		CloseFile(fdes);
	}
	
	return 0;
}

int OpenFile(char* name,char* mode)
{
	int fd=-1,ret=0;
	char path[80];
	char defPath[]="/home/suraj/MOS_DS/";

	sprintf(path,"%s%s",defPath,name);

	if((strcmp(mode,"O_RDONLY"))==0)
		{
		 fd=open(path,O_RDONLY);
		}
	else if((strcmp(mode,"O_WRONLY"))==0)
		{
		 fd=open(path,O_WRONLY);
		}
	else if((strcmp(mode,"O_RDWR"))==0)
		{
		 fd=open(path,O_RDWR);
		}
	else if((strcmp(mode,"O_APPEND"))==0)
		{
		 fd=open(path,O_WRONLY | O_APPEND);
		}
	else
		printf("\nFailed : incorrect mode\n");
	
	return fd;	
}


void CloseFile(int fd)
{
	close(fd);
}
