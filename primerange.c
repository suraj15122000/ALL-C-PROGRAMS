# include<stdio.h>
void prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d ",n);
    }
}
int main(){
    int f,l;
    printf("Enter first num. of range ");
    scanf("%d",&f);
     printf("Enter last num. of range ");
     scanf("%d",&l);
     for(int i=f;i<=l;i++){
        prime(i);
     }

}