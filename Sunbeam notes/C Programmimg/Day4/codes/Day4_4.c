#include<stdio.h> 

int main( )
{
    // break , continue , goto , return
    //goto  

    int rank; 
    START: 
    printf("Enter the rank"); 
    scanf("%d",&rank); 

    if(rank>=1 && rank<=5)
         goto LABEL;  
    else 
         goto START;       


    LABEL: 
    printf("All the best !!!!.."); 




    return 0; 
}

