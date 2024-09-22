#include<stdio.h> 

int main( )
{
    int number =10; 
    //enum 
    enum color 
    {
          RED,GREEN,BLUE
        //RED=1,GREEN,BLUE
        //RED=1,GREEN=2,BLUE=3 
        //RED=-1,GREEN,BLUE=3 
        //RED=-1,GREEN=-1,BLUE=3 
        //RED=1.5,GREEN,BLUE// NOT OK (int constant values are allowed )
        //RED='A',GREEN,BLUE  // OK 
        //red,GREEN,BLUE
        //red,GREEN,BLUE,RED 
       // red,GREEN,BLUE,red  
        //red=number,GREEN,BLUE // NOT OK 
    }; 
    //printf("%d ",RED); // 0
    //printf("%d ",GREEN); // 1  
    
    // int x; // datatype variable-name 
    enum color c1,c2,c3,c4; 
    printf("%d %d",sizeof(enum color),sizeof(c1)); // 4 4 
 
    return 0; 
}
// int main( )
// {
//     //enum 
//     enum color 
//     {
//         RED,GREEN,BLUE,WHITE,YELLOW
//     }; 
//     //printf("%d ",RED); // 0
//     //printf("%d ",GREEN); // 1  
    
//     // int x; // datatype variable-name 
//     enum color c1,c2,c3,c4; 
//     printf("%d %d",sizeof(enum color),sizeof(c1)); // 4 4 
//     c1 = RED; 
//     printf("%d ",c1); // 0 
//     c1++; 
//     printf("%d ",c1); // 1  
//     //RED++; // 0++ => 0 = 0 + 1 => lvalue error 
//     return 0; 
// }
/*

        enum IPL 
        {
            CSK , MI , RR
        }; 
        enum IPL x; 
*/