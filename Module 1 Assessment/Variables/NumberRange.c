#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int number;
	
	printf("Enter number: ");
	scanf("%d", &number);

	if (number <= 10 && number > 0) {
		printf("%d is between 1 and 10", number);
	} else if  (number <= 20 && number > 10) {
		printf("%d is between 10 and 20", number);
	} else if  (number <= 30 && number > 20) {
		printf("%d is between 20 and 30", number);	
	} else if  (number <= 40 && number > 30) {
		printf("%d is between 30 and 40", number);	
	} else if  (number <= 50 && number > 40) {
		printf("%d is between 40 and 50", number);	
	} else if  (number <= 60 && number > 50) {
		printf("%d is between 50 and 60", number);	
	} else if  (number <= 70 && number > 60) {
		printf("%d is between 60 and 70", number);	
	} else if  (number <= 80 && number > 70) {
		printf("%d is between 70 and 80", number);
	} else if  (number <= 90 && number > 80) {
		 printf("%d is between 80 and 90", number);	
	} else if  (number <= 100 && number > 90) {
		printf("%d is between 90 and 100", number);	
	} else {
		printf("Out of range!");	
	}
	
	return 0;
}
