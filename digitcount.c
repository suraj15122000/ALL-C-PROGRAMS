# include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter any num. :");
    scanf("%d",&n);
  while(n>0){
    n/=10;
    count++;
  }
    printf("No. of digit is %d",count);
}