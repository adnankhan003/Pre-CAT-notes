#include<stdio.h> 

int main( )
{
    // int ans; 
    // int num1 = 1; 
    // int num2 = 2; 
    // ans = num1 && num2; 
    // //      T  &&  T
    // //         T 
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 2; 
    // ans = num1 && num2; 
    // //      F  &&  XXX
    // //         F 
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 2; 
    // ans = num1 && ++num2; 
    // //      F  &&  XXX
    // //         F 
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 2; 
    // ans = ++num1 && ++num2;
    // //    ++F=T  && ++T
    // //          T 
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 2; 
    // ans = num1++ && ++num2;
    // //     F     &&  XXX
    // //            F
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 2; 
    // ans = num1++ || ++num2;
    // //     F     ||  ++T
    // //           T
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 0; 
    // ans = num1++ || num2++;
    // //      F++  ||  F++
    // //           F     
    
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    int ans; 
    int num1 = 10; 
    int num2 = 0; 
    ans = num1++ || num2++;
    //      T++  ||  XXX
    //           T     
    
    printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    return 0; 
}