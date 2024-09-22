#include<stdio.h> 
int main()
{
    // logical OPR 
    // && , || , ! ( 0 or 1 )
    
    // non-zero => True (including -ve) 
    //  0 => false 

    // // && ( logical AND )
    // printf("%d ",12 && 13); 
    // //           T &&  T => T => 1
    // printf("%d ",0 && 13);
    // //           F  && T => F => 0
    // printf("%d ",13 && 0);
    // //           T  && F => F => 0 
    // printf("%d ",0 && 0);
    // //           F && F => F => 0        
    

    // || ( logical OR )
    // printf("%d ",12 || 13); 
    // //           T ||  T => T => 1
    // printf("%d ",0 || 13);
    // //           F || T => T => 1
    // printf("%d ",13 || 0);
    // //           T  || F => T => 1 
    // printf("%d ",0 || 0);
    // //           F || F => F => 0        
    
    //printf("%d ",!10); // 0 
    // 10 => True => !True =>False 
    
    //printf("%d ",!-10); // 0 

    //printf("%d ",!!10);// 1  // !T=>F =>!F => T   

    printf("%d ",!0);// 1 
    // 0 => false => !False => True
    return 0;
}
