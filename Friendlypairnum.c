# include<stdio.h>
int sumdivisor(int n){
    int store=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            store=store+i;
        }
    }
    return store;
}
void friendlypair(int a,int b){
    int ans1=sumdivisor(a);
    int ans2=sumdivisor(b);
    int st1=ans1/a;
    int st2=ans2/b;
    (st1==st2) ?  printf("%d and %d is Friendly pair numbers.",a,b) : printf("%d and %d is not Friendly pair numbers.",a,b);
}
int main(){
    int a,b;
    printf("Enter two number to check both are friendly pair or not:");
    scanf("%d%d",&a,&b);
    friendlypair(a,b);

}