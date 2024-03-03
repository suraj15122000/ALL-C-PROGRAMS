#include<stdio.h>
int iseven(int n){
    if(n%2==0){
        return 2;
    }
    else return 1;
}
void main()
{
    int n,ans;
    printf("Enter any no.");
    scanf("%d",&n);
    ans=iseven(n);
    printf("%d",ans);
}