# include<stdio.h>
void power(int b,int p){
    int ans=1;
    while(p!=0){
        ans*=b;
        p--;
    }
    printf("power of %d is %d",b,ans);
}
int main(){
    int b,p;
    printf("Enter first base then enter power :");
    scanf("%d%d",&b,&p);
    power(b,p);
    return 0;
}