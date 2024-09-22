#include<stdio.h> 
//self-referential structure 
struct node
{
    int data; 
    struct node *ptr; // self referential pointer 
}; 
int main( )
{
    struct node s1; 
    struct node s2; 
    return 0; 
}