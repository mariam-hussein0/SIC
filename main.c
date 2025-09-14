#include <stdio.h>
#include "header.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Result of subtraction: %d\n", subtract(x, y));
    return 0;
}

float add (float x, float y){
	float sum =x+y;
	return sum;
}
