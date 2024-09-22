#include<stdio.h> 
//int arr[5]; // default 0 
int main()
{
    int num1 = 1,num2 = 2 , num3 = 3 , num4 = 4 , num5 = 5;  
    
     int arr[5] = {11,22,33,44,55}; // init-list  
    /*
        array index starts from 0 to n-1 

       arr  
          10  20   30   40   50 
         [0]  [1]  [2]  [3]  [4]
         100  104  108  112  116  

          
    */
    
    int index; 
    // for(index = 0 ; index < 5 ; index++)
    //         printf("%u ",&arr[index]); 
    // printf("\n"); 

 //The array name is treated as address of 0th element in any runtime expression.    
 // name of array represents the base address (0th  index )

    int *ptr = arr;  
    
    //printf("%d ",*ptr); //11

    printf("%d ",++*ptr);//11 => 12  
    //printf("%d ",*ptr); //12
    //printf("%d ",arr[0]); //12

    printf("%d ",*++ptr); //22 
    //++ptr => ptr to next location (scale factor)
    //*=>valueat => 22 
    //printf("%d ",*ptr); //22
    
    printf("%d ",*ptr++); // 22
    printf("%d",*ptr); //33  

    return 0;
}
// ++*ptr++ 