#include<stdio.h>
int main(){
    int n,i,j,k=65;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(int l=i;l<n;l++){
            printf(" ");
        }
        j=i;
        while(j>=1){
            printf("%c ", k);
            j--;
        }
        printf("
");
        k++;
    }
    return 0;
}