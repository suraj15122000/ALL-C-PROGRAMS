# include<stdio.h>
# include<math.h>
void decimal(int n){
    int ans=0,i=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans=ans + pow(2,i);

        }
        i++;
        n/=10;
    }
    printf("%d",ans);
}
int main(){
    int n;
    printf("Enter any binary number :");
    scanf("%d",&n);
    decimal(n);
}