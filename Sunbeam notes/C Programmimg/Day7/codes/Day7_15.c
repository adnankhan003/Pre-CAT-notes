#include<stdio.h> 
#define ROW 3
#define COL 3  
#define SIZE 10 

int main()
{
    int sum = 0 , i , j , arr[ROW][COL]={1,2,3}; 

    for( i = 0 ; i < ROW ; i++)
    {
        for(j = 0 ; j < COL ; j++)
        {
            sum = sum + arr[i][j]; 
        }
    }
 printf("%s (%d) : sum = %d\n",__FILE__,__LINE__,sum);    
 printf("Compiled on : %s %s \n",__DATE__,__TIME__); 
    return 0; 
}
//gcc Day7_15.c -E -o Day7_15.i