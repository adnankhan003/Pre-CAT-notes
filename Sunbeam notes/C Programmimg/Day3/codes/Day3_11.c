#include<stdio.h> 
int main()
{
    //while , for (entry controlled loop)
    /*
         for(step1 ; step2 ; step4)
                step3    
        step1 is executed only once 
    */
    // int i; 
    // for( i = 1 ; i<=5 ; i++)
    //     printf("%d",i); //1 2 3 4 5    
    // printf("\nOutside the loop %d",i); // 6     
    
    // int i = 1; 
    // for(   ; i<=5 ; i++)
    //     printf("%d",i); //1 2 3 4 5    
    // printf("\nOutside the loop %d",i); // 6     
    
    // int i = 1; 
    // for(   ; i<=5 ; )
    //     printf("%d",i++); //1 2 3 4 5    
    // printf("\nOutside the loop %d",i); // 6     
    
    //int i = 1; 
    //for(   ;  ; )
    //    printf("%d",i);  
    //printf("\nOutside the loop %d",i);  

     int i; 
     for(i = 1 ; i<10 ; i++); 
        printf("%d",i); // 10    

    return 0;
}
