#include<stdio.h> 
#include<string.h> 
struct emp // created the datatype (blueprint)
{
    int empno; //4 
    char name[20]; //20
    double salary; //8  
};
void print_emp(struct emp a[]);  
void accept_emp(struct emp a[]); 
int main( )
{
    //int x[3];
    struct emp arr[3]; 
    accept_emp(arr); // base address  
    print_emp(arr); // base address 
    return 0; 
}
void print_emp(struct emp a[])
{
    int i; 
    for(i = 0 ; i < 3 ; i++)
        printf("%d %s %.2lf\n",a[i].empno,a[i].name,a[i].salary); 
}
void accept_emp(struct emp a[])
{
        int i; 
        for(i  = 0 ; i < 3 ; i++)
        {
            printf("Enter empno name and salary"); 
            scanf("%d%s%lf",&a[i].empno,a[i].name,&a[i].salary); 
        }
}