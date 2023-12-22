#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float c,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        c=sqrt(i);
        sum+=c;
    }
    printf("%.2f",sum);
}