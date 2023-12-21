#include<stdio.h>
int main()
{
    int a,i,b,c,count=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&b,&c);
    for(i=0;i<a;i++){
        if(arr[i]<b || arr[i]>c){
            printf("%d ",arr[i]);
            count++;
        }
    }
    if(count==0){
        printf("%d",-1);
    }
}