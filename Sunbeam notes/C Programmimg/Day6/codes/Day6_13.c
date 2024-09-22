#include<stdio.h> 
void printArray(int *ptr); 
int main()
{
    int arr[5] = {1,2,3,4,5};
    //printf("%d ",sizeof(arr)); // 20 bytes 
    printArray(arr); // base address ( call by address ) 
    return 0;
}

void printArray(int *ptr) // pointer  notation  
{
      //printf("%d ",sizeof(ptr)); // 4 ( pointer )   
        ptr++; 
        // arr = arr + 1 => 100 => 104 
        printf("%d ",*ptr); //*(104)=> 2  
        printf("%d ",ptr[-1]); // 1 
        /*
            ptr[-1]
            *(ptr - 1 )
            *(104 - 1)
            *(100)
            valueat(100)
        */
}
