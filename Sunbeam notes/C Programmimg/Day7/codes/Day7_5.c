#include<stdio.h> 

int main( )
{
    int arr[][4] = {1,2,3,4,5,6,7,8,9}; 

    /*
                [0]  [1]  [2]  [3]
        [0]      1    2    3    4 

        [1]      5   6     7    8 

        [2]      9   0     0    0  

    */
     int row,col; 
    for(row = 0 ; row < 3 ; row++)
    {
        for(col = 0 ; col < 4 ; col++)
        {
            printf("%4d",arr[row][col]); 
        }
        printf("\n"); 
    }
    return 0; 
}