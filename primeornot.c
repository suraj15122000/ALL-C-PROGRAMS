# include<stdio.h>
# include<stdbool.h>
bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    printf("Enter any num.");
    scanf("%d",&n);
    bool ans=prime(n);
    if(ans==1){
        printf("%d is not a prime num.",n);
    }
    else{
        printf("%d is prime num.",n);
    }
}