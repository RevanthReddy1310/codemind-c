#include<stdio.h>
int main()
{
   int n,i,j=0;
   scanf("%d", &n);
   for(i=65;i<=((65+n)-1);i++){
       int k=0;
       while(k<n){
           if(j==k || k==((n-1)-j)){
               printf("%c", i);
           }else{
           printf(" ");
           }
           k++;
       }
       printf("
");
       j++;
   }
}