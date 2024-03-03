# include<stdio.h>
int gcd(int a,int b,int min){
    for(int i=min;i>0;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}
int main(){
    int a,b;
    printf("Enter two numbers.");
    scanf("%d%d",&a,&b);
    int min=((a<b) ? (a) : (b));
    int ans=gcd(a,b,min);
    printf("GCD is %d ",ans);

}