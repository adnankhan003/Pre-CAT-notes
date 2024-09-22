#include<stdio.h> 
#include<stdlib.h> 
int main( )
{
    //int *ptr = NULL; // wild pointer 

    // void* calloc(size_t n , size_t size); 

    int i,cnt; 
    int *marks;   
    printf("how many students"); 
    scanf("%d",&cnt); // 5
    marks =(int*)calloc(cnt , sizeof(int)); // 5 * 4 => 20 bytes  
    printf("Enter the marks of %d students :: ",cnt); 
    for( i = 0 ; i < cnt ; i++)
         scanf("%d",&marks[i]); 
    for( i = 0 ; i < cnt ; i++)
         printf("%d ",marks[i]); //*(marks + i)=> *(400 + 1)=> *(404)=> 20  
    
    free(marks); //20 bytes => released 
    // to avoid memory leakage 
    
    marks = NULL; // To avoid dangling pointer 
    return 0; 
}
/*
        static => int arr[100]={1} => compile time 

        dynamic => runtime 

*/