#include<stdio.h>
int main()
{
    int i,a,sum=0;
    scanf("%d",&a);
    while(a>0){
        i=a%10;
        sum += i;
        a=a/10;
    }
    printf("%d",sum);
}