/*
    I/P a ammount 
    if ammount is greater than or equal to 5000 
    give 10% discount 
*/
#include<stdio.h> 
int main()
{
    double ammount,discount; 
    printf("Enter the ammount"); 
    scanf("%lf",&ammount); //4000.00

    if(ammount >= 5000.00) //if(4000>=5000)=> if(0)
       ammount = ammount * 0.90; 
    printf("Ammount = %.2lf",ammount); 

    return 0;
}

// int main()
// {
//     double ammount,discount; 
//     printf("Enter the ammount"); 
//     scanf("%lf",&ammount); //4000.00

//     if(ammount >= 5000.00) //if(4000>=5000)=> if(0)
//     {
//         discount = ammount * 0.10; 
//         ammount = ammount - discount; 
//     }
//     printf("Ammount = %.2lf",ammount); 

//     return 0;
// }
