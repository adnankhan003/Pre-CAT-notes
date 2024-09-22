#include<stdio.h>
//register int x1; // NOT OK   
int main()
{
    register int a; // cpu memory ( if not init garbage)
    int x; // RAM => process => stack 
    {
        register int a = 100; 
        printf("%d",a); //100 
    }
    int y; // local variable 
    printf("%u ",&y); // address ( OK ) 
    //register int z; 
    //printf("%u ",&z); // NOT OK 

    int m; 
    register int *ptr = &m; // OK 

    //register int p; 
    //int *pt1 = &p; // NOT OK   
    //register static int m1; // NOT OK 
    return 0;
}
