# include<stdio.h>
void pallindrome(int n){
    int temp=n;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp){
        printf("%d ",temp);
    }
   
   

}
int main(){
    int f,l;
    printf("Enter first range:");
    scanf("%d",&f);
    printf("Enter last range:");
    scanf("%d",&l);
    for(int i=f;i<=l;i++){
         pallindrome(i);
    }
   
    return 0;
}