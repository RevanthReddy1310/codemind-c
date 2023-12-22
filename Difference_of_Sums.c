#include<stdio.h>
int main()
{
    int a,b,sum=0,i,sum2=0,c;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum+=i;
        b=i*i;
        sum2+=b;
    }
    c=sum*sum;
    printf("%d",c-sum2);
}