#include "Header.h"

int main(int argc, char* argv[])
{

	CheckAccess(argv[1]);
	return 0;
}


void CheckAccess(char* file)
{

	if(access(file,R_OK) < 0)
	{
	  printf("Our process can not access this file for reading purpose\n");
	}
	  else
	  {
		printf("Our process has read access\n");
	  }

	if(access(file,W_OK) < 0)
	{
	  printf("Our process can not access this file for writing purpose\n");
	}
	  else
	  {
		printf("Our process has write access\n");
	  }

	if(access(file,X_OK) < 0)
	{
	  printf("Our process can not access this file for executing purpose\n");
	}
	  else
 	  {
		printf("Our process has executing access\n");
	  }

}	

