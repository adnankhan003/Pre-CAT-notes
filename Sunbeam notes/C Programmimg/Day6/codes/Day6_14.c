#include<stdio.h> 
void printArray(int *ptr);
void readArray(int arr[]);
int main( )
{
    int arr[5]; 
    printf("Enter the array elements :: \n"); 
    readArray(arr); 
    printf("Array elements are :: \n"); 
    printArray(arr); 
    return 0; 
}
void printArray(int *ptr) // pointer notation 
{
    int index; 
    for(index = 0 ; index < 5 ; index++)
    {
        printf("%d",ptr[index]); // ptr[index] => *(ptr + index)
    }
}
void readArray(int arr[]) // array notation 
{
    int index; 
    for(index = 0 ; index < 5 ; index++)
    {
        scanf("%d",&arr[index]); 
    }
}