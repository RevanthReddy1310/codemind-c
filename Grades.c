#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    f=((a+b+c+d+e)/500)*100;
    if(f>=90)
    {
        printf("Grade A");
    }
    else if(f>=80)
    {
        printf("Grade B");
    }
    else if(f>=70)
    {
        printf("Grade C");
    }
    else if(f>=60)
    {
        printf("Grade D");
    }
    else if(f>=40)
    {
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }
}