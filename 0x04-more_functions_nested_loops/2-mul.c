#include"main.h"
#include<stdio.h>
int mul(int a, int b){
	return a*b;
}
int main(){
	printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
	return (0);
}