#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[]) {
	int count = 0, num1 = 1, num2 = 1, sumOfPrevTwo;
	
	printf("Enter number: ");
	scanf("%d", &count);
	printf("Fibonacci Series of %d numbers: ", count);

	int i=1;
	
    while(i <= count){
    	printf("%d ",num1);
        sumOfPrevTwo = num1 + num2;
        num1 = num2;
        num2 = sumOfPrevTwo;
        i++;
    }
	return 0;
}
