#include<stdio.h> 
//int addition(int num1 , int num2); //Global declaration 
int addition(int  , int ); //Global declaration 
// (type checking )
int main()
{
    int num1 = 2 , num2 = 2; // local variables 
    // local variables => in- function variable 
    int ans; 
    int addition(int num1 , int num2); //local declaration 
    ans = addition( num1 , num2 ); // function call 
    // num1 and num2 are called as actual argument 
    printf("ans = %d\n",ans); //4 
    ans = addition( 20 ,30); // function call 
    printf("ans = %d",ans); // 50 
    return 0;
}
// main => calling function 
// addition => called function
// function defination  
// num1 and num2 are called as formal argument 
int addition(int num1 , int num2)
{
    // num1,num2,ans are called as local variables 
      int ans = num1 + num2; // 50  
      return ans;  
}
