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
void perfect(int n){
    int ans=sumdivisor(n);
    if(n==ans){
    printf("%d is Perfect number.",n);

    }
    else{
         printf("%d is not a Perfect number.",n);
    }
}
int main(){
    int n;
    printf("Enter any number to check Perfect or not:");
    scanf("%d",&n);
    perfect(n);
}