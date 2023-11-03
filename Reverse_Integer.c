#include<stdio.h>
int main()
{
     int n,r,reverse=0;
     scanf("%d",&n);
     while(n){
           r=n % 10;
           reverse = reverse * 10 + r;
           n=n/10;
     }
     printf("%d",reverse);

}
