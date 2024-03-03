# include<stdio.h>
# include<math.h>
void binary(int n){
    int i=0,ans=0;
       int bit;
    while(n!=0){
      bit = n & 1;
        ans=bit * pow(10,i) + ans;
        n = n >> 1;
        i++;

    }
    printf("%d is in binary.",ans);
}
int main(){
    int  n;
    printf("Enter any number.");
    scanf("%d",&n);
    binary(n);
    return 0;
}