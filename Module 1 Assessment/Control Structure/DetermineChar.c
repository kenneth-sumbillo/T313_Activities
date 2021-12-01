#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("'%c' is uppercase alphabet.", ch);
    } else if(ch >= 'a' && ch <= 'z') {
        printf("'%c' is lowercase alphabet.", ch);
    } else if(ch >= '0') {
    	printf("'%c' is number.", ch);
	} else {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
