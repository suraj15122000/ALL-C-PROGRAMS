# include<stdio.h>
void sumnatural(int n){
    int ans=n*(n+1)/2;
    printf("Sum of Natural no. is %d",ans);
}
int main(){
       int n;
       printf("Enter the last number from where you should add");
       scanf("%d",&n);
       sumnatural(n);

} 