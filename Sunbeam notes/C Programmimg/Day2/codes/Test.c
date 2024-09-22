// #include<stdio.h>
// int main(void)
// {
// signed char c1 = -1;
// unsigned char c2= -1; // 0 to 255  => 256 ( 256 - 1 )=>255 
// //printf("%u",c2); 
// printf("%d\n",c1+c2 );
// //            -1+255 => 254    
// return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// int val = 10;
// float fval = 56.789643;
// printf("%5d%*.*f",val,val,val-8,fval);

// /*
//         %5d 
//               1 0           5 6 . 7 8 
//         - - - - - - - - - - - - - - - 

//         %*.*f
//         %10.2f => fval 
// */

// return 0;
// }

// #include<stdio.h>
// int main()
// {
// printf("%d %d %d",'\r'-'\n','\r'-'\t','\r'-'\b');
// //                 13 - 10 , 13 - 9 , 13 - 8 
// //                     3   ,   4    , 5   
// return 0;
// }

// What will be the output of the following:
// #include<stdio.h>
// int main(void)
// {
// char c1='z';//122 
// printf("%d\t%c\t%o",c1-57,c1-'9',c1-32);
// //                  122-57, 122-57 , 122-32 
// return 0;
// }

// #include<stdio.h>
// int main(void)
// {
//     // '\0'=> 0  
// 1. int a=3,b;
// 2. b = a * '\0'; // multiplied by 0 
// 3. printf("b=%d \n",b);
// 4. b = a / '\0';// divide by 0  
// 5. printf("b=%d \n",b);
// return 0;
// }