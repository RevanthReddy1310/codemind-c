#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
  if(n<3 || n > 100){
      printf("The pattern is not possible");
      return 0;
  }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("
");
    }
        for(i=n-1;i>0;i--){
        for(j=i;j>0;j--){
            printf("*");
        }
        printf("
");
    }
}