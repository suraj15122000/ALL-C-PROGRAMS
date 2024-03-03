# include<stdio.h>
int fact(int n){
    if(n==1){
       return 1; 
    }
    else{
        return (n*fact(n-1));
    }
}
void strong(int n){
    int temp=n;
    int rem,rev=0;
    while(n>0){
        rem=n%10;
        rev=rev+fact(rem);
        n=n/10;
    }
    if(temp==rev){
        printf("%d is strong number",temp);
    }
    else{
        printf("%d is not a strong num.",temp);
    }
}
int main(){
    int n;
    printf("Enter any num.");
    scanf("%d",&n);
    strong(n);

}