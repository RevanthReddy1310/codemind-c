#include<stdio.h>
int main()
{
      int n,a,i=1;
      scanf("%d%d",&n,&a);
      while(i<=a){
          printf("%d x %d = %d
",n,i,n*i);
          i++;
      }
}
