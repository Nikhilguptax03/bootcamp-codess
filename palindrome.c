#include<stdio.h>
int main(){
    int num,rev=0,x,a;
    printf("enter the no. ");
    scanf("%d",&num);
    x=num;
    while(num>0){
        a=num%10;
        rev=rev*10+a;
        num=num/10;

    }
    if(rev==x){
        printf("the no. is palindrome");
    }
    else{
        printf("the no. is not palindrome");
    }
}