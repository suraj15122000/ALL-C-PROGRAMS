# include<stdio.h>
void sum(int n){
    int rem,sum=0;
     while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digit is %d",sum);
}
int main(){
    int n;
    printf("Enter any num.");
    scanf("%d",&n);
   sum(n);
}