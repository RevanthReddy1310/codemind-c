#include<stdio.h>
int main()
{
    int a,i,j,n;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("
");
    }
}