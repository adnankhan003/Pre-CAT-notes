#include<stdio.h> 
int main()
{
    int num1 = 1,num2 = 2 , num3 = 3 , num4 = 4 , num5 = 5;  
    
    int arr[5] = {1,2,3,4,5}; // init-list  
    // 5 => size 
    // int => integer 
    // [ ] => subscript operator 

    /*
        array index starts from 0 to n-1 

       arr  
          1    2    3    4    5 
         [0]  [1]  [2]  [3]  [4]
         100  104  108  112  116  
    */
    //array notation 
    //printf("%d ",arr[0]); //1  
    //printf("%d ",arr[2]); //3
    //printf("%d ",arr[4]); //5 
    
    int index; 
    for(index = 0 ; index < 5 ; index++)
            printf("%d ",arr[index]); 
    
    return 0;
}
