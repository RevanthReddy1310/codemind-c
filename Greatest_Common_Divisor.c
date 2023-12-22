#include<stdio.h>
 int main (){
     int a,b;
     scanf("%d %d",&a,&b);
     int gcd = 0,h;
     h = ( a > b ) ? a : b;
     for ( int i = 1; i <= h; i++){
         if ( f % i == 0 && l % i == 0){
             gcd = i;
         }
     } 
     printf("%d",gcd);
 }