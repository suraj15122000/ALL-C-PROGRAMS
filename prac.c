# include<stdio.h>
# include<math.h>
void replace(int n){
    int rem,i=0;
    int num2=0;
    while(n!=0){
        rem=n%10;
        if(rem==0){
            rem=1;
        }
        num2=rem*pow(10,i)+num2;
        i++;
        n/=10;
    }
     printf("After replace %d .",num2);
   }
   

int main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    printf("before replacing %d\n",n);
    replace(n);
    return 0;
    
}