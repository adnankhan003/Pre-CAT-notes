#include<stdio.h> 

int main( )
{
    int a = 1; 
    int b = 2; 
    int c = 3; 

    //a+=b+=c+=1;  
    /*
        c = c + 1 => 3 + 1 => 4 
        b = b + c => 2 + 4 => 6 
        a = a + b => 1 + 6 => 7 

    */
    a = b = c = -20; 
    printf("%d %d %d",a,b,c); // -20 -20 -20 
    
    return 0; 
}
// int main() 
// {
//     int a = 1; 
//     int b = 2; 
//     printf("%d ",a); // 1
//     printf("%d ",a=b); //2 
//     printf("%d",a); //2   
//     return 0; 
// } 
    
// int main()
// {
//     //short hand assignment 
//     int num = 10; 
//     //num = num + 2; // OK  
//     //num+=2; // num = num + 2  
//     //num-=3; // num = num - 3;  
//     //num*=2; // num = num * 2;  
//     //num/=2; // num = num / 2; 
//     //num%=2; // num = num % 2; 
//     printf("%d",num); //12 
//     return 0; 
// } 
/*
        num = num + 11; 
        num+=11;  
*/
    

// int main()
// {
//     //int x = 1; 
//     //12 = 1; //lvalue
//     //int a; 
//     //2 + 1 = a;  
//     //a = 2 + 1; // OK 
//     //printf("%d",x); //1 
    
//     int c = 3; 
//     //c+1; //3  
//     c = c + 1; //4  
//     printf("%d",c);   
//     return 0;
// }
