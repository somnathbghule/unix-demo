#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void demo_fun(){

}

int main(int argc, char **argv){


	demo_fun(); //call instruction
	int fd=open("./makefile", O_RDONLY); //trap instruction
	if( fd == -1 ){
		printf("open failed: %d", fd);
	}else{
		close(fd);
	}
	//return 0;

	return (0);
}
