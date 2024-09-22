#include<stdio.h> 

int main( )
{
    printf("Program started ...\n"); 
    int ans; 
    ans = 5 / 0; //runtime error 
    printf("ans = %d",ans); 
    printf("Program end...");
    return 0; 
}
// Compilation starts from line number 1

/*
        runtime Error 
        1.Program Compile => Yes 
        2.Program Execution => Yes 
        3.Success => no  

        Compile Time Error 
        1.Program Compile => NO 
        2.Program Execution => NO 
        3.Success => no  


*/