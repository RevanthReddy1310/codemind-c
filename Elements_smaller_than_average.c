#include<stdio.h>
int main()
{
    int a,i,sum=0,avg,count=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/a;
    for(i=0;i<a;i++){
        if(avg>=arr[i]){
            count++;
        }
    }
    printf("%d",count);
}