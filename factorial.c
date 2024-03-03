# include<stdio.h>
long long fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}
int main(){
    int n;
    printf("Enter any num.");
    scanf("%d",&n);
   long long ans=fact(n);
    printf("Factorial is %li",ans);
}