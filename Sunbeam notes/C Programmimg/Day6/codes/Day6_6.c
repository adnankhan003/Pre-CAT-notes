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
    
    //printf("%d ",arr[-1]); 
    /*
            *(arr + -1)
            *(arr - 1)
            *(100 - 1)
            *(100 - 1 * 4)
            *(100 - 4)
            *(96)
            valueat(96)
            Garbage 
    */
    //printf("%d ",*arr + 12); //22 
    /*  
                *arr => valueat(arr)=>valueat(100)=>10 

                *arr + 12 
                 10  + 12 
                 22 
    */
    //printf("%d ",arr[0]++);//10
    // arr[0] = arr[0] + 1 => 10 + 1 
    //printf("%d ",arr[0]);//11  

    printf("%d ",++arr[0]);//11
    printf("%d ",arr[0]);//11 
    return 0;
}
/*  
     array notation               pointer notation 
        arr[4]    ============>    *(arr + 4 )
*/