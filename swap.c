# include<stdio.h>
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a= %d b= %d",a,b);
}
main(){
    int a,b;
    printf("Enter two numbers for swap :");
    scanf("%d%d",&a,&b);
    printf("a = %d b= %d \n",a,b);
    swap(a,b);
}