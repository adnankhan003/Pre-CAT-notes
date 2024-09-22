#include<stdio.h> 

int main( )
{
    //nested loops 
    // int i , j; 
    // for(i = 1 ; i<=5 ; i++) // i=1,2,3,4,5,6 
    // {   
    //     printf("for each        i:%d\n",i); 
    //     for(j = 1; j<=5 ; j++)
    //     {
    //           printf("          j:%d",j);   
    //     }
    //     printf("\n"); 
    // }

    // int i , j, k ; 
    // for(i = 1 ; i<=5 ; i++) // i=1,2,3,4
    // {   
    //     printf("for each        i:%d\n",i); 
    //     for(j = 1; j<=5 ; j++)//j=1 
    //     {
    //         printf("for each        j:%d\n",j); 
    //         for(k = 1 ; k<=5 ; k++)//k=1,2,3,4,5
    //         {
    //                 printf("        k:%d",k); 
    //         }
    //         printf("\n"); 
    //     }
    //     printf("\n"); 
    // }

    int i , j, k ; 
    for(i = 1 ; i<=5 ; i++); 
    {   
        printf("i:%d\n",i); //6 
        for(j = 1; j<=5 ; j++);
        
         
        {
            printf("j:%d\n",j);//6  
            for(k = 1 ; k<=5 ; k++);
            
            
            {
                    printf("k:%d",k);//6  
            }
            printf("\n"); 
        }
        printf("\n"); 
    }
    
    return 0; 
}