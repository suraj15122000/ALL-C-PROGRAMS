# include<stdio.h>
int gcd(int a,int b,int min){
    for(int i=min;i>0;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}
int main(){
    int a,b,min;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    min=((a<b) ? a: b);
    int ans=gcd(a,b,min);
    printf("GCD of %d and %d is %d",a,b,ans);
}