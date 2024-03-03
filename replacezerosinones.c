# include<stdio.h>
void replace(int n){
    int rem;
    int num2=0;
    while(n!=0){
        rem=n%10;
        if(rem==0){
            rem=1;
        }
        n/=10;
        num2=num2*10+rem;
    }
    n=0;
    while(num2!=0){
        
        int re=num2%10;
        n=n*10+re;
        num2/=10;
    }
    printf("After replace %d .",n);
}
int main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    printf("before replacing %d\n",n);
    replace(n);
    return 0;
    
}