#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b && a>c && b>c)|| (b>a && b>c && a>c)){
        printf("%d",a+b);
    }
    else if((b>a && b>c && c>a)||(c>a && c>b && b>a)){
        printf("%d",b+c);
    }
    else if((c>a && c>b && a>b)||(a>b && a>c && c>b)){
        printf("%d",c+a);
    }
}