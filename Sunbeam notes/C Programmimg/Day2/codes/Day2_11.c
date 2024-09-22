#include<stdio.h> 

int main( )
{
    // ++ (increment ), -- ( decrement )
    // +1             ,  -1 

    // int a = 1; 
    // int ans; 
    // ans = ++a; // increment (pre-incrment)
    // printf("%d %d",ans,a);    
    // //              2  2 

    // int a = 1; 
    // int ans; 
    // ans = a++; // increment (post-incrment)
    // printf("%d %d",ans,a);    
    

    // int a = 1; 
    // int ans; 
    // ans = --a; // decrement (pre-decrement)
    // printf("%d %d",ans,a);  // 0 0   
    
    int a = 1; 
    int ans; 
    ans = a--; // decrement (pre-decrement)
    printf("%d %d",ans,a);  // 1 0   
    
    return 0; 
}