#include<stdio.h>
int main()
{
    int i,a,dc=0;
    scanf("%d",&a);
    while(a>0){
        a%10;
        dc++;
        a=a/10;
    }
    printf("%d",dc);
}