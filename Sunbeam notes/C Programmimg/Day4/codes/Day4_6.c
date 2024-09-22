#include<stdio.h> 
double addition(double num1 , double num2); 
void multiplication(double a , double b ); 
int division(int num,int den); 
void subtraction( void ); 
int main( ) // user-defined function 
{
    double num1=10.00 , num2 = 20.00,res; 
    res = addition(num1 , num2 ); //function call 
    printf("%.2lf\n",res);
    multiplication(2.0,4.0); //function call 
    int num,den,result;
    printf("\n Enter the num1 and num2");
    scanf("%d%d",&num,&den); // 4 2   
    result = division(num,den); // 4 2   //function call 
    printf("\nresult = %d",result); 
    subtraction(); //function call 
    return 0; 
}
// user-defined function 
//subtraction function is not taking i/p from calling function 
void subtraction( void )
{
    int p,q,r; 
    printf("\nEnter the 2 numbers");
    scanf("%d%d",&p,&q); 
    r = p - q; 
    printf("result = %d",r);  
    
}

int division(int num,int den)// 4 2 
{
        return (num/den); // 4 / 2 
}

//if function is not returning any value => return type => void 
void multiplication(double a , double b )
{
        double c; 
        c = a * b; 
        printf("\n c = %.2lf",c); 
}

double addition(double num1 , double num2)
{
        double res; 
        res = num1 + num2; 
        return res; 
} 