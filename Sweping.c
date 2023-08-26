#include<stdio.h>
int main()
{
    int a,b,c;


    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second value");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d",a,b);
        
        
        return 0;

}
 