#include<stdio.h>
int main()
{
    int r,rev=0,n,i,m;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
}