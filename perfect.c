#include<stdio.h>
int main(){
    int num,sum=0,i;
    printf("enter the no. ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
    if(num%i==0){
        sum=sum+i;
    }
    }
    if(sum==num){
        printf("this is a perfect number");
    }
    else{
        printf("the no. is not perfect no.");
    }
}