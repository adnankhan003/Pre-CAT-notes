#include<stdio.h> 
//int arr[5]; // default 0 
int main()
{
    int num1 = 1,num2 = 2 , num3 = 3 , num4 = 4 , num5 = 5;  
    
     int arr[5] = {10,20,30,40,50}; // init-list  
    /*
        array index starts from 0 to n-1 

       arr  
          10  20   30   40   50 
         [0]  [1]  [2]  [3]  [4]
         100  104  108  112  116  
    */
    
    int index; 
    for(index = 0 ; index < 5 ; index++)
            printf("%u ",&arr[index]); 
    printf("\n"); 

 //The array name is treated as address of 0th element in any runtime expression.    
 // name of array represents the base address (0th  index )

    //printf("%u ",&arr); //100
    //printf("%u ",&arr[0]);//100     
    
    printf("\n"); 
    // array notation 
    printf("%d ",arr[0]); //10 
    printf("%d ",0[arr]); //10
    printf("%d ",arr[1-1]);//10

    //pointer notation 
    printf("%d ",*(arr + 0)); //10 
    printf("%d ",*(0 + arr)); //10
    printf("%d ",*(arr + 1 - 1)); //10   
    return 0;
}
/*  
     array notation               pointer notation 
        arr[4]    ============>    *(arr + 4 )
*/