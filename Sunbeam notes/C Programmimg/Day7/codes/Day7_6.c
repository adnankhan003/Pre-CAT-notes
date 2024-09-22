#include<stdio.h> 
//int arr[3][3]; // 0 
int main( )
{
    
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; // 2D array
    
    /*
        arr 
                [0]   [1]   [2] 
        [0]      1     2     3   
        100     100   104   108 

        [1]      4     5     6 
        112     112   116   120 

        [2]      7     8     9 
        124     124   128   132  

       
    */  
    
    int row,col; 
    for(row = 0 ; row < 3 ; row++)
    {
        for(col = 0 ; col < 3 ; col++)
        {
            printf("%u ",&arr[row][col]); 
        }
        printf("\n"); 
    }
    printf("\n"); 

    //printf("%u ",arr); //100 

    //printf("%u ",arr+1);  //112 
    /*
                arr + 1 
                100 + 1 * 12 
                100 + 12 
                112 

    */ 
    //printf("%u ",arr+2);  //124  

    //inner address 
    //printf("%u ",*(arr + 0) ); //100 

    //printf("%u ",*(arr + 1) ); //112 

    //printf("%u ",*(arr + 2) );//124   

    //printf("%u ",*(arr + 0) + 1 );  //104 

    //printf("%u ",*(arr + 1) + 1 );  //116 

    //printf("%u ",*(arr + 2) + 2); //132 

    //   printf("%u ",*(*(arr + 0) + 1 ) );  //*(104)=>2    
    
    //   printf("%u ",*(*(arr + 1) + 1) );  //5 

    //   printf("%u ",*(*(arr + 2) + 2) ); //9 


    //printf("%d ",arr[0] [0]); //1 (array notation )

    //printf("%d",*(*(arr+0)+0));//1 (pointer notation ) 
    
    //printf("%u ",**arr); //1 
      
     printf("%u ",*arr + 1 );//104
     printf("%u ",*(*arr + 1) );//*104 => 2    
    return 0; 
}
/*
     array notation              pointer notation  
        arr[1][1]   ==========> *(*(arr+1)+1)
        arr[2][2]   ==========> *(*(arr+2)+2)

        arr[i][j] ==============> *(*(arr+i)+j)

*/