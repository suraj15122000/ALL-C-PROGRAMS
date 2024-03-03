# include<stdio.h>
int sumdivisor(int n){
    int store=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            store=store+i;
        }
    }
    return store;
}
void abundant(int n){
    int ans = sumdivisor(n);
    (ans>n) ? printf("%d is an abundant number.",n) : printf("%d is not abundant number.",n);
}
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    abundant(n);
}