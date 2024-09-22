#include<stdio.h>
int main()
{
    //double x = 12.3; 
    //double y = 11.3; 
    //double x = 12.3 , y = 11.3; 
    //multiple declaration are allowed in single 
    
    int num = 10; 
    //printf("          %d",num); 
    //printf("%10d",num);// right justified 
    //                 1 0  
    // - - - - - - - - - -  
    //printf("%-10d",num);// left justified
    // 1 0 
    // - - - - - - - - - -  
    
    float fvar = 11.33; 
    //printf("%f",fvar);  
    //printf("%.2f",fvar);  
    //printf("%10.2f",fvar);//right justified 
    //           1 1 . 3 3 
    // - - - - - - - - - -   
    //printf("%-10.2f",fvar);//left justified 
    // 1 1 . 3 3 
    // - - - - - - - - - -
    printf("%.f",fvar);   //11.33 => 11   
    return 0;
}
