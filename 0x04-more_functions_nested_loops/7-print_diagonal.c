#include "main.h"
#include<stdio.h>
 void print_diagonal(int n){
	 if(n<=0){
		 printf("\n");
		 return;
	 }
	 for(int i=0;i<n;i++){
		 for(int j=0;j<i;j++){
			 printf(" ");
		 }
			printf("\\\n");
	 }
 }
int main(){
	print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
	return 0;
}