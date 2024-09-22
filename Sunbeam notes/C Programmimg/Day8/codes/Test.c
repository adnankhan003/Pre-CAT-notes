// #include <stdio.h>
// #include<string.h> 
// int main(void)
// {
// 	char dest[] = "Visual basic",src[] = "C++";
// 	puts(strcpy(&dest[7],src) - 7 );
// 	return 0;
// }

// #include<stdio.h>
// void fun(int **pp);
// int main(void)
// {
// int arr[3][4] = {{1, 2, 3, 4}, {4, 3, 2, 8}, {7, 8, 9, 0}};
// int *ptr=NULL;
// ptr = &arr[0][0];//1 
// fun(&ptr);
// return 0;
// }
// void fun(int **pp)
// {
// printf("%d", **pp);//1  
// return ;
// }

// #include<stdlib.h>
// #define MERGE(x,y) x < y ? x##y(0) : y ;
// //                  ex<it? ex##it(0) : 
// //                         exit(0)
// int main()
// {
// int ex=2,it=3,a;
// MERGE(ex,it) 
// // exit(0)
// printf("%d\n",a);
// return 0;
// }

#include<stdio.h> 
typedef char* string_t;
#define string_d char*
int main( )
{
    string_t s; 
    printf("%d ",sizeof(s));  // 4 bytes 
    string_d s1;  
    printf("%d",sizeof(s1));  // 4 bytes 
    return 0; 
}