#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, sum=0, firstDigit, lastDigit;
	
    printf("Enter number (do not put spaces in between numbers): ");
    scanf("%d", &n);
  
    lastDigit = n % 10;
 
    while(n >= 10){
        n = n / 10;
    }
    firstDigit = n;
    
    sum = firstDigit + lastDigit;
    
    printf("Sum of first and last digit = %d", sum);
	return 0;
}
