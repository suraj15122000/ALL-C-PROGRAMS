# include<stdio.h>
void armstrong(int n){
    int temp=n;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev+(rem*rem*rem);
        n=n/10;
    }
    if(rev==temp){
        printf("%d is Armstrong num.",temp);
    }
    else{
        printf("%d is not armstrong num.",temp);
    }
}
int main(){
    int n;
    printf("Enter any num.");
    scanf("%d",&n);
    armstrong(n);
}