# include<stdio.h>
#include <stdbool.h>
bool isprime(int n){
    int i;
    //int count=0;
    for(i=2;i<n/2;++i){
    	if(n%i==0){
    	  return 1;
         
		}
        else{
            return 0;
        }
    }
}
int main(){
    int n; 
    printf("Enter any no. :");
    scanf("%d",&n);
    bool ans=isprime(n);
    if(ans==1){
    	printf("%d is prime no,",n);
	}
	else{
		printf("%d is not prime no.",n);
	}
    return 0;
}