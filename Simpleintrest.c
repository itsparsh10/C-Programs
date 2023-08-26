#include<stdio.h>
int main()
{
    float p,t;
    float r = 9.5;

    printf("ENTER THE PRINCIPAL AMOUNT");
    scanf("%f" , &p);
    printf("ENTER THE TIME IN YEAR");
    scanf("%f" , &t);

    float SI = (p*r*t)/100;
    printf("simple intrest = %.2f", SI);

    

    return 0;



   

}