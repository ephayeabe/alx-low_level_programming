#include"main.h"
#include<stdio.h>
void print_line(int n){
	if(n<=0){
		printf("\n");
		return;
	}
	for(int i=0;i<n;i++){	
		printf("_");
	}
	printf("\n");
}
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}