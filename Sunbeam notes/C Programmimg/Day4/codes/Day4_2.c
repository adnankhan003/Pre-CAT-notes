#include<stdio.h> 
int main( )
{
    enum color 
    {
        RED=1,BLUE,GREEN 
    }; 
    //int choice=1; 
    //enum color choice=3;
    enum color choice;   
    printf("Enter the choice"); 
    scanf("%d",&choice); 
    switch (choice)
    {
    case RED:       // case 1: 
        printf("RED color "); 
        break;
    case BLUE:      // case 2; 
        printf("Blue color "); 
        break;
    case GREEN:     // case 3: 
        printf("Green color "); 
        break;
    }
    return 0; 
}
// int main( )
// {
//     int choice=1; 
//     switch (choice)
//     {
//     case 1: 
//         printf("RED color "); 
//         break;
//     case 2: 
//         printf("Blue color "); 
//         break;
//     case 3: 
//         printf("Green color "); 
//         break;
//     }
//     return 0; 
// }


/*
//  annonymous enum 
      enum
      {
         RED,BLUE,GREEN  
      }e1,e2,e3;  


*/