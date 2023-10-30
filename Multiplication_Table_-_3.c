#include<stdio.h>
int main()
{
      int n,a,b,i;
      scanf("%d%d%d",&n,&a,&b);
      i=a;
      while(i<=b){
          printf("%d x %d = %d
",n,i,n*i);
          i++;
      }
}
