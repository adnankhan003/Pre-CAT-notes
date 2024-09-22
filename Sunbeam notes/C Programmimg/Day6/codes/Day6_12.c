#include<stdio.h> 
void printArray(int arr[]); 
int main()
{
    int arr[5] = {1,2,3,4,5};
    //printf("%d ",sizeof(arr)); // 20 bytes 
    //arr++; // NOT OK 
    printArray(arr); // base address ( call by address ) 
    return 0;
}

void printArray(int arr[]) // array notation  
{
      //printf("%d ",sizeof(arr)); // 4 ( pointer )   
        arr++; // pointer 
        // arr = arr + 1 => 100 => 104 
        printf("%d ",*arr); //*(104)=> 2  
        printf("%d ",arr[-1]); // 1 
        /*
            arr[-1]
            *(arr - 1 )
            *(104 - 1)
            *(100)
            valueat(100)
        */
}
