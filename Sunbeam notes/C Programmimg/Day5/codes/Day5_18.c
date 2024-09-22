#include<stdio.h> 

int main( )
{
    int num = 10; 
    char ch = 'A'; 
    float fvar = 11.33; 
    double dvar = 10.33; 

    void *ptr; // generic pointer  

    ptr = &num; // pointer to int 
    printf("%d ",*(int*)ptr); //10 

    ptr = &ch; // pointer to character
    printf("%c ",*(char*)ptr); //A 

    ptr = &fvar; // pointer to float
    printf("%.2f ",*(float*)ptr); //11.33

    ptr = &dvar;      
    printf("%.2f ",*(double*)ptr); //10.33
    return 0; 
}