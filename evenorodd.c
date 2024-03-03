# include<stdio.h>
void oddeven(int n){
     if(n>0){
        if(n%2==0){
            printf("%d is even no.",n);
        }
        else{
            printf("%d is odd no.",n);
        }
    }
}
int main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    oddeven(n);
    return 0;
   
}