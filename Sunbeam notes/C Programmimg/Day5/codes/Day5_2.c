#include<stdio.h> 
int main()
{
    int a = 10; 
    static int b = 20; 
//created in data-section when program is started( before main is called)

    //static int c = a; //created in data-sectiob when program is started(before main is called)
    //but we are trying to init with local variable (which is not created yet)        

 //to init static and global variables use const values(not local variables)   
    
    return 0;
}
