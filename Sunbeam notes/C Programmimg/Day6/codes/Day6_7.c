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
    
    int *ptr = arr; // pointer to array 
    //printf("%u ",ptr); //100 
    //printf("%u ",arr); //100 
    
    //printf("ptr+ 0 = %u   ",ptr+0); //100 
    /*
            ptr + n => 
            ptr + n * scale factor of ptr 

            ptr + 0 
            100 + 0 * 4 
            100 + 0    
            100  
    */
    //printf("ptr + 1 = %u ",ptr+1);//104  
    /*      
            ptr + 1 
            100 + 1 
            100 + 1 * 4 
            100 + 4 
            104 
    */
   printf("*(ptr+ 0) = %u   ",*(ptr+0) );//10 
   /*       
            *(ptr + 0)
            *(100 + 0)
            *(100 + 0 * 4)
            *(100 + 0)
            *(100)
            valueat(100)
            10 
   */
    printf("*(ptr+ 0) = %u   ",*(ptr+1) );//20 
    /*
                *(ptr + 1)
                *(100 + 1)
                *(100 + 1 * 4)
                *(100 + 4)
                *(104)
                valueat(104)
    */
    return 0;
}
/*  
     array notation               pointer notation 
        arr[4]    ============>    *(arr + 4 )
*/