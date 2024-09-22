#include<stdio.h> 

int main( )
{
    int row,col; 
    int arr[3][4] = {{1,2,3,4},{10,20,30,40},{11,22,33,44}};
    int (*ptr)[4] = arr; 
   // ptr is a pointer to the block of 4 ints 
   for(row = 0 ; row < 3 ; row++)
   {
       for(col = 0 ; col < 4 ; col++)
       {
           printf("%u ",&arr[row][col]); 
       }
       printf("\n"); 
   }  
   printf("\n");  
   
   //printf("%u ",ptr+0); //400 

   //printf("%u ",ptr+1); //416 

   //printf("%u ",ptr+2); //432 

    // printf("%u ",*(ptr+0) ); //400 
    // printf("%u ",*(ptr+1)); //416 
    // printf("%u ",*(ptr+2)); //432 
    
    // printf("%u ",*(*(ptr+0)) ); //1
    // printf("%u ",*(*(ptr+1)) ); //10 
    // printf("%u ",*(*(ptr+2))); // 11
    
    //printf("%u ",*(ptr + 0) + 1 ); //404 
    //printf("%u ",*(*(ptr + 0) + 1 ) ); //2 // pointer notation 

    //printf("%d ",ptr[0][1]); //2 
    
    printf("%d ",ptr[2][-3]);//*(*(ptr+2) + -3) 
    //*(*(ptr+2) - 3) 
    /*
           ptr[2][-3]
           *(*(ptr+2) + -3) 
           *(*(ptr+2) - 3) 
           *(432 - 3) 
           *(432 - 3 * 4)
           *(432 - 12)
           *(420)
           20  


    */
    return 0; 
}