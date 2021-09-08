#include"main.h"
#include<stdio.h>
void more_numbers(void){
	for(int i=0;i<10;i++){
		for(int j=0;j<=14;j++)
			printf("%d",j);
		printf("\n");
	}
}
int main(void){
	more_numbers();
	return (0);
}