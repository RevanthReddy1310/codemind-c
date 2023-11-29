#include<stdio.h>
int main()
{
    int a,rev=0,r,b;
    scanf("%d",&a);
    b=a;
    while(a>0){
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    if(b==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}