#include<stdio.h> 
int main()
{
    char *numbers[] = {"zero","one","two","three"};    
    
    // printf("%u ",numbers[0]);//4214784
    // printf("%u ",numbers[1]);//4214789 
    // printf("%u ",numbers[2]);//4214793 
    // printf("%u ",numbers[3]);//4214797 

    //  printf("%u ",*(numbers+0) + 0 );//84
    //  printf("%u ",*(numbers+0) + 1 );//85 
    //  printf("%u ",*(numbers+0) + 2 );//86
    //  printf("%u ",*(numbers+0) + 3 );//87   

    // pointer notation 
    // printf("%c ",*(*(numbers+0) + 0 ) );//z
    // printf("%c ",*(*(numbers+0) + 1 ) );//e
    // printf("%c ",*(*(numbers+0) + 2 ) );//r
    // printf("%c ",*(*(numbers+0) + 3 ) );//o
    // printf("%d ",*(*(numbers+0) + 4 ) );//0 
    
    //array notation 
    printf("%c ",numbers[0][0]); 
    printf("%c ",numbers[0][1]);
    printf("%c ",numbers[0][2]);
    printf("%c ",numbers[0][3]);
    printf("%d ",numbers[0][4]);       
    return 0;
}
