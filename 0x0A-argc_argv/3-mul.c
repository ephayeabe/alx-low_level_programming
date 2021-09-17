#include<stdio.h>
#include<stdlib.h>
int main (int argc, char *argv[])
{
	int mult;
	if(argv[1]!=NULL&& argv[2]!=NULL){
		mult=atoi(argv[1])*atoi(argv[2]);
		printf("%d",mult);
	}else{
		printf("Error");
		return 1;
	}
	return 0;
}