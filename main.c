#include <stdio.h>
#include "header.h"


float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0; 
    }
    return (float)a / b ;
}


int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
	char opcode;
	printf("please enter the opcode: ");
	scanf("%c",&opcode);
	float res=0;
	switch(char){
		case '+': res=add(x,y);
		case '-': res=subtract(x,y);
		case '/': res=divide(x,y);
		default:res=0.0;  
	}
	printf("Result:%.2f ",res);
}

int add (int x, int y){
	int sum =x+y;
	return sum;
}

