#include<stdio.h>
int main()
{
    int i,t,n,m,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d",&n,&m,&k);
        if((k+n)<=m){
            printf("YES
");
        }
        else{
            printf("NO
");
        }
    }
}