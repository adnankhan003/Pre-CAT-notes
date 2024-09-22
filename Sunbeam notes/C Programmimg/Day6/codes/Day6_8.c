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
    // pointer notation 
    // printf("%u ",ptr + 0 ); //100 
    // printf("%u ",*(ptr + 0) ); //10 
    // printf("%u ",*(0 + ptr) ); //10
    // printf("%u ",*(ptr + 1 - 1) ); //10  

    // array notation  
    // printf("%d ",ptr[0]);
    // printf("%d ",0[ptr]);
    // printf("%d ",ptr[1-1]);

    //array notation                  pointer notation  
    // ptr[1]               =====>    *(ptr + 1 )
    
    //printf("%d",*ptr + 10); //20  
    // *ptr => valueat(ptr)=>valueat(100)=>10 
    // 10 + 10 => 20 
    
    printf("%d",ptr[-1]);// Garbage 
    /*
                ptr[-1]
                *(ptr + -1)
                *(ptr - 1)
                *(100 - 1)
                *(100 - 1 * 4)
                *(100 - 4)
                *(96)
                valueat(96)
                Garbage 
    */
    return 0;
}
/*  
     array notation               pointer notation 
        arr[4]    ============>    *(arr + 4 )
*/