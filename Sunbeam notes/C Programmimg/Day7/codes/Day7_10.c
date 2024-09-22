#include<stdio.h> 
//command-line argument 
int main(int argc, char *argv[] )
{
    //a.exe 1 2 
    //printf("%u ",argv[0]);
    //printf("%u ",argv[1]);
    //printf("%u ",argv[2]);

    // printf("%u ",*(argv + 0) + 0  );
    // printf("%u ",*(argv + 0) + 1  );
    // printf("%u ",*(argv + 0) + 2  );
    
    // pointer notation 
    // printf("%c ",*(*(argv + 0) + 0)); // a 
    // printf("%c ",*(*(argv + 0) + 1 ) );//.
    // printf("%c ",*(*(argv + 0) + 2));//e
    // printf("%c ",*(*(argv + 0) + 3));//x
    
    printf("%c ",argv[0][0]); //a 
    printf("%c ",argv[0][1]); //.  
    return 0;
}
//atoi(); 