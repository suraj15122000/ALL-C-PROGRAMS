# include<stdio.h>
 void greatest(int a ,int b,int c){
    if(a>b && a>c){
        printf("%d is Greatest",a);
    }
    else if(b>a && b>c){
        printf("%d is Greatest",b);
    }
    else{
        printf("%d is Greatest",c);
    }
 }
int main(){
    int a,b,c;
    printf("Enter three numbers .");
    scanf("%d%d%d",&a,&b,&c);
    greatest(a,b,c);
    return 0;
}