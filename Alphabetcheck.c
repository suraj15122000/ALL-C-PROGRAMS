#include<stdio.h>
#include<conio.h>

int main(){
    char c;
    printf("Enter any symbol: ");
    scanf("%c",&c);
    if(c>='a' && c<='z' || c>='A' && c<='Z'){
        printf("%c is alphabet",c);
        
    }
    else{
    	printf("%c is not a alphabet",c);
	}
    return 0;
}
