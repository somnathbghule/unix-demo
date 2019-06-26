#include <stdio.h>
#include <stdlib.h>


int val=10;
void demo_fun(int *ptr){

	ptr=&val;
}




int main(int argc, char **argv){

	int *ptr=NULL;

	demo_fun(ptr);

	printf("*ptr: %d\n", *ptr);
	//return 
	return 0;
}
