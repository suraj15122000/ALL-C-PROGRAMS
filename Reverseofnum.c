#include<stdio.h>
int main(){
    int n,s=0,rev=0;
    printf("Enter any num.");
    scanf("%d",&n);
    while(n!=0){
       s=n%10;
       rev=rev*10+s;
        n=n/10;
    }
    printf("Reverse is %d",rev);
    return 0;
}