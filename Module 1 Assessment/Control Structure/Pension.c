#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int gender, age;
		
	printf("Enter Gender Press [1] for Male and [2] for Female: ");
	scanf("%d", &gender);
	printf("Enter age: ");
	scanf("%d", &age);
	
	switch(gender){
		case 1: 
			if(age >=90) {
				printf("Pension is 4000");
			} else if(age >=60) {
				printf("Pension is 6000");
			} else {
				printf("Pension is 0");
			}
			break;
		case 2:
			if(age >=90) {
				printf("Pension is 3000");
			} else if(age >=60) {
				printf("Pension is 5000");
			} else {
				printf("Pension is 0");
			}
			break;
		default:
			break;
	}
	
	return 0;
}
