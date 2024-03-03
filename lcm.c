# include<stdio.h>
int lcm(int a,int b,int max){
    while(1){
        if(max%a==0 && max%b==0){
            return max;
        }
        else{
            ++max;
        }
    }
}
int main(){
    int a,b,max;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    max=((a>b)? (a):(b));
    int ans =lcm(a,b,max);
    printf("LCM of %d and %d is %d",a,b,ans);
    return 0;

}