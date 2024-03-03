# include<stdio.h>
int main(){
    int a,b,ans;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a==b){
        printf("Both numbers are same.");
    }
    else{
       ans=((a>b) ? a:b);
    }
    printf("Greatest number is %d",ans);
}