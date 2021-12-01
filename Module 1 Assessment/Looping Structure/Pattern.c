#include<stdio.h>
 
int main()
{
    int a, b, c, d;
    for(a=0;a<=6;a++) {
        for(c=65;c<=71-a;c++) {
        	printf("%c",c);
		}
 
        for(b=1;b<=a*2-1;b++){
        	printf(" ");
		}
 
        for(d=71-a;d>=65;d--){
        	if(d!=71){
				printf("%c",d);
			}
		}
 
        printf("\n");
    }
 
    return 0;
}
