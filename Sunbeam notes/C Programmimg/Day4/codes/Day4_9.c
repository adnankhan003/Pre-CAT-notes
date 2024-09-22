#include<stdio.h> 
void sumpro( int a, int b ); 
int main( )
{
    // auto , static , register , global / extern 
    auto int d; // auto indicates local variable 
    /*
        variable declared inside the function are called as local variables  
    */ 
    int c; // local variable ( auto => optional )
    //if not initialized then it contains garbage
    {
        int c = 10; 
        printf("\n c = %d",c); //10 
        {
            int c = 20; 
            printf("\n c = %d",c);//20 
            {
                int c  = 30; 
                printf("\n c = %d",c);//30 
                {
                    printf("\n c = %d",c); //30 
                }
            }
            printf("\n c = %d",c);//20 
        }
    } 

    int a = 10 , b = 3; 
 //a,b,c,d will be created when main is called 
 // on main's FAR  
    //sumpro( a,b); // function call 
    //printf("\n inside main : a = %d b = %d",a,b); // 10 3 
    return 0; 
}
//              10      3 
void sumpro( int a, int b )
{
    //a,b,ps,pp will be created when sumpro is called 
    //on sumpro's FAR 
    int ps,pp; 
    ps = a + b;// 10 + 3 => 13 
    pp = a * b;// 10 * 3 => 30    
    printf("\nsum = %d prod = %d",ps,pp);//13 30 
    a++; 
    b++; 
    /*
        changes made in a and b doesn't reflect in main 
        because main's a and b are different 
    */ 
   // a,b,ps,pp will be destroyed 
}
/*

    int main( )
    {
        {
            {
                {
                    {
                        int c = 10; 
                    }
                }
            }
        }
        printf("%d",c); // ERROR     
        return 0; 
    }
     int main( )
    {
        int c = 10; 
        {
            {
                {
                    {
                        printf("%d",c); //10 
                    }
                }
            }
        }
           
        return 0; 
    }

*/