#include<stdio.h>
#include<conio.h>
int main(){
    char c;
   // char lowercase,uppercase;
    printf("Enter any character:");
    scanf("%c",&c);
    if(c=='a'|| c=='e' || c=='i' ||c=='o' || c=='u' || c=='A'|| c=='E' || c=='I' ||c=='O' || c=='U'){
    	printf("%c is vowel",c);
	}
	else
	{
		printf("%c is constant",c);
	}
    return 0;

}
