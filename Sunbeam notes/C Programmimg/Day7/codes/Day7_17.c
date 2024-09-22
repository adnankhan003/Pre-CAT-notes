#include<stdio.h> 
//Stringizing operator (#)
#define PRINT(x)  puts(#x)
#define PRINT_VAR(var) printf(#var "= %d\n",var); 

//Token pasting operator (##)
#define PRINT_SAL(a,b) printf("sal = %d",a##b)

int main( )
{
    int basicsalary = 40; 
    int adventure = 50; 
    //PRINT(Hello world); 
    //puts("Hello world")

    //PRINT_VAR(adventure); 
    //printf("adventure" "= %d\n",adventure); 

    PRINT_SAL(basic,salary);
    //printf("sal = %d",basicsalary) 
    
    return 0; 
}