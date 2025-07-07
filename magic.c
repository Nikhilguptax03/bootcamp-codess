#include<stdio.h>
int main(){
    int num;
    printf("enter the no. ");
    scanf("%d",&num);
    if(num%9==1){
        printf("this is a magic number");
    }
    else{
        printf("the no. is not magic no.");
    }
}