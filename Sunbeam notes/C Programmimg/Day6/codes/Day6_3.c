#include<stdio.h> 
//int arr[5]; // default 0 
int main()
{
    int num1 = 1,num2 = 2 , num3 = 3 , num4 = 4 , num5 = 5;  
    
     
    
    int arr[] = {1,2,3,4,5}; //OK 
    /*
        array index starts from 0 to n-1 

       arr  
          1    2    3    4    5 
         [0]  [1]  [2]  [3]  [4]
         100  104  108  112  116  
    */
    
    //printf("%d ",arr[0]); // 1 
    //arr[0] = 111;   
    //printf("%d ",arr[0]); // 111  
    //printf("%d ",arr[1-1]); // 1
    //           arr[0]    
    //printf("%d ",arr[1.5]); // NOT OK 

    //printf("%d ",0[arr]); // 1 
    //           arr[0]

    printf("%d ",arr[arr[1] ] );
    //           arr [  2    ]
    //               3  
    return 0;
}
