#include<stdio.h>
int main()
{
    int a,b,c,rev=0;
    scanf("%d",&a);
    b=a;
    while(a>0){
        c=a%10;
        rev=rev*10+c;
        a=a/10;
    }
    if(rev==b){
        printf("True");
    }
    else{
        printf("False");
    }
    
}