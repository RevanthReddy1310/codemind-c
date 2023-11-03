#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d",&a);
    b=a*2;
    for(i=b;i>=2;i-=2){
        printf("%d ",i);
    }
}