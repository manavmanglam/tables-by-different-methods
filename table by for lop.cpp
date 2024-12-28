//using for loop table for 5
#include<stdio.h>
int main(){
	int limit;
	printf("enter the limit for the table of 5: ");
	scanf("%d", &limit);
	printf("Multiplication Table of 5 (up to %d):\n", limit);
	for (int i = 1; i<= limit; i++){
		printf("5 * %d = %d\n", i, 5 * i);
	}
	return 0;
}
