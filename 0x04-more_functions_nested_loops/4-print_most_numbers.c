#include"main.h"
#include<stdio.h>
void print_most_numbers(void){
	for(int i=0;i<=9;i++){
		if(i==2||i==4){
			continue;
			
		}
		printf("%d",i);
		
	}
}
int main(void){
	print_most_numbers();
    return (0);
}