# include<stdio.h>
int main(){
    int a,b;
    printf("Enter the start range num");
    scanf("%d",&a);
     printf("Enter the last range num");
     scanf("%d",&b);
    int ans=0;
    for(int i=a;i<=b;i++){
        ans=ans+i;
    }
    printf("Sum is %d",ans);

     return 0;
}