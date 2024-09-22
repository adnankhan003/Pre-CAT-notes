#include<stdio.h> 

int main( )
{
    int a; 
    float b; 
    //a = 23 / 5; // (int / int )  => int 
    // RHS => 4.6  => (int )=> 4 
    // LHS => int 
    // int <= int
    //printf("%d",a);  //4 
    

    //b = 23 / 5; // (int)/(int)=> int 
    // RHS => 4.6 => 4
    // LHS => float 
    // float <=int 
    // 4.0 <= 4   
    //printf("%.1f",b);  //4.0 
    
    b = 23.0f / 5; // (float) / (int) => (float) 
    //RHS => float => 4.6
    //LHS => float
    //float<=float 
    printf("%.1f",b);  //4.6 
    return 0; 
}
/*
    if 2 operands are of diff type 
    small type is promoted to larger type for calculation 

    double 
    float
    int 
    char

    int + int => int 
    int + double => double 
    double + float => double 
    char * int => int 
    short / int => int 
    int / float => float 

    char and short values are promoted to "int" for 
    arithmatic calculation 
    char + char => int 
    short + short => int 
    char + short => int 

    typecasting 
    (float)23 => 23 is a int but consider it as a float 
    for this calculation 
*/  