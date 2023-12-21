#include<stdio.h>
int main()
{
    int a,i,count=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<a-1;i++){
        if(arr[i-1]%2!=0 && arr[i+1]%2==0 || arr[i-1]%2==0 && arr[i+1]%2!=0){
            count++;
        }
    }
    printf("%d",count);
}