#include<stdio.h> 

int main( )
{
    int num1 = 100; 
    int num2 = 20; 
    int ans; 
    //ans = num1 > num2 ? num1 : num2; 
    //      condtn    ? exp1 : exp2 
    //printf("ans = %d",ans); // 100   
    ans = num1 > num2 ? printf("num1 is greatest") : printf("num2 is greatest");
    return 0; 
}
/*
            nested condtn operator 
            num1,num2,num3; 
ans = num1 > num2 ? ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3 );  
        codtn     ?        exp1 

 a>b && a>c ? printf("%d",a) : ( b > c ? printf("%d",b) : printf("%d",c) );       

 max = a>b && a>c ? a : ( b > c ? b : c );     
*/