#include<stdio.h> 
#include<string.h> 
struct emp // created the datatype (blueprint)
{
    int empno; //4 
    char name[20]; //20
    double salary; //8  
}; 
void accept_emp(struct emp *p); 
void print_emp( struct emp e ); 
int main( )
{
    struct emp e1; 
    accept_emp(&e1); // call by address 
    print_emp(e1); // call by value 
    return 0; 
}
void print_emp( struct emp e )
{
    printf("%d %s %.2lf",e.empno,e.name,e.salary); 
}
void accept_emp(struct emp *p)
{
    printf("Enter the empid"); 
    scanf("%d",&p->empno); 
    printf("Enter the name"); 
    scanf("%s",p->name); 
    printf("Enter the salary"); 
    scanf("%lf",&p->salary); 
}