# include<stdio.h>
#include<math.h>
int main(){
    int n=145;
    int ans=0;
    int i=0;
    while(n>0){
        int rem=n%10;
        ans=ans * pow(10,i) +rem;
        i++;
        n/=10;

    }
    printf("%d",ans);
}