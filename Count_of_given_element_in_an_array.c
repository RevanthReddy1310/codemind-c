#include<stdio.h>
int main()
{
    int a,i,count=0,b;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(i=0;i<a;i++){
        if(arr[i]==b){
            count++;
        }
    }
    printf("%d",count);
}