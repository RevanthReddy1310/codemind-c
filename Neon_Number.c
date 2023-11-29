#include<stdio.h>
int main()
{
    int a,r,b,s,m=0;
    scanf("%d",&a);
    s=(a*a);
    b==s;
    while(s>0){
        r=s%10;
        m=m+r;
        s=s/10;
    }
    if(a==m){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}
