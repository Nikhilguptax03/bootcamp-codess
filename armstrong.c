#include<stdio.h>
int main(){
    int num,sum=0,x;
    printf("enter the no. ");
    scanf("%d",&num);
    x=num;
    while(num>0){
        sum=sum+( num%10)*( num%10)*( num%10);
        num=num/10;

    }
    if(sum==x){
        printf("the no. is armstrong");
    }
    else{
        printf("the no. is not armstrong");
    }
}