# include<stdio.h>
void leap(int y){
    if(y%400==0 ||  y%4==0 && y%100!=0){
        printf("%d is a leap year.",y);
    }
    else{
        printf("%d is not a leap year.",y);
    }
}
int main(){
    int y;
    printf("Enter years:");
    scanf("%d",&y);
    leap(y);
}