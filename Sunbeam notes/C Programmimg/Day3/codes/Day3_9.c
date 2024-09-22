#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice =1 ; 
    //switch (choice)
    //switch (1)
    //switch (1.5)
    //switch (1 + 1 ) // switch(2)
    switch ('A') 
    {
        case 12 && 13:   //case 1:    
        printf("one"); 
        break;

        case 0 || 0:   //case 0:
        printf("zero"); 
        break; 

        case 33: 
        printf("case 33 ");
        break;    
    
    
    }
    return 0;
}

// int main()
// {
//     int num = 3; 
//     int choice = 65;
//     switch (choice) // 4
//     {

//         //sequence doesnt matter 
//     //case 2-1:   //case 1: 
//     //case 'A':   //case 65
//     //case 2.3: // NOT OK   
//     //case num: // NOT OK 
//      case 55: case 66: 
//      printf("Two ");
//         break;

//     case 33: // NOT ALLOWED ( duplicated case)
//         printf("one ");
//         break;

//     case -13:
//         printf("Three ");
//         break;

//     case 4:
//         printf("four ");
//         break;

//     default:
//         printf("invalid");
//         break;
//     }
//     return 0;
// }

// int main()
// {
//     int choice = 33;
//     switch (choice) // 4
//     {

//         //sequence doesnt matter 
//     case 1:
//         printf("Two ");
//         break;

//     case 1: // NOT ALLOWED ( duplicated case)
//         printf("one ");
//         break;

//     case -13:
//         printf("Three ");
//         break;

//     case 4:
//         printf("four ");
//         break;

//     default:
//         printf("invalid");
//         break;
//     }
//     return 0;
// }

// int main()
// {
//     int choice = 33;
//     switch (choice) // 4
//     {

//         //sequence doesnt matter 
//     case 2:
//         printf("Two ");
//         break;

//     case 1:
//         printf("one ");
//         break;

//     case 141:
//         printf("Three ");
//         break;

//     case 4:
//         printf("four ");
//         break;

//     default:
//         printf("invalid");
//         break;
//     }
//     return 0;
// }
// int main()
// {
//     int choice = 33;
//     switch( choice ) // 4
//     {

//         case 1:
//         printf("one ");
//         break;

//         case 2:
//         printf("Two ");
//         break;

//         case 3:
//         printf("Three ");
//         break;

//         case 4:
//         printf("four ");
//         break;

//         default:
//         printf("invalid");
//         break;

//     }
// switch( choice ) // 1
// {
//     case 1:
//     printf("one ");

//     case 2:
//     printf("Two ");

//     case 3:
//     printf("Three ");

//     case 4:
//     printf("four ");
// }
//return 0;
//}
