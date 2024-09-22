#include<stdio.h> 
int main()
{
    //input a single digit number 
    // 1 => one 
    // 2 => two 
    char *numbers[] = {"zero","one","two","three"};    
    //printf("%d",sizeof(numbers)); // 4 * 4 => 16
    int num;  
    printf("Enter the number"); 
    scanf("%d",&num); // 2 
    printf("%s",numbers[num]); //numbers[2]=>two   
    return 0;
}