#include<stdio.h>
int main()
{
    int arr[100],i,a;
    for(i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==-1){
            break;
        }
        a=arr[i]*arr[i];
        printf("%d
",a);
    }
    
}