#include<stdio.h>
int main()
{
    int a,r,sum=0,multiplication=1;
    scanf("%d",&a);
    while(a>0){
        r=a%10;
        sum+=r;
        multiplication*=r;
        a=a/10;
    }
    if(sum==multiplication){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}
