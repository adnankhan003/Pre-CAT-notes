#include<stdio.h> 

int main( )
{
    //matrix representation 
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; // 2D array
    //printf("%d",sizeof(arr)); // 9 * 4 => 36 
    //printf("%d",sizeof(arr[0][0])); // 4 * 1 => 4 
    //printf("%d",sizeof(arr[0])); // 4 * 3 => 12 
    
    /*
        arr 
                [0]   [1]   [2] 
        [0]      1     2     3   
                100   104   108 

        [1]      4     5     6 
                112   116   120 

        [2]      7     8     9 
                124   128   132  

        array notation 
        arr[0][0] => 1 
        arr[0][2] => 3 
        arr[1][1] => 5 
        arr[2][2] => 9 
    */  
    // printf("%d ",arr[0][0]); 
    // printf("%d ",arr[0][2]);
    // printf("%d ",arr[1][1]);
    // printf("%d ",arr[2][2]);   
    
    int row,col; 
    for(row = 0 ; row < 3 ; row++)
    {
        for(col = 0 ; col < 3 ; col++)
        {
            printf("%4d",arr[row][col]); 
        }
        printf("\n"); 
    }
    return 0; 
}