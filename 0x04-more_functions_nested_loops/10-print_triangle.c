#include"main.h"
#include<stdio.h>
void print_triangle(int size){
	int x = 0,y = 0;
	for(x=1; x<=size; ++x)
    {
        for(y=x; y<size; ++y)
        {
            printf(" ");
        }
        for(y=1; y<=x; ++y)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main(void){
	print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
	return (0);
}