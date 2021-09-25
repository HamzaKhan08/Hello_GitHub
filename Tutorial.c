#include<stdio.h> 
int main()
{
    int p, n ;
    float r, si ;
    p = 6000 ;
    n = 7 ;
    r = 9 ;
    /* formula to calculate simple interest */
    si = p * n * r / 100 ;
    printf ("%f\n" , si ) ;
    return 0 ;
}