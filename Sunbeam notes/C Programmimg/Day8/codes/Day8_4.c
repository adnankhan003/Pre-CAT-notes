
#include<stdio.h> 
struct date 
{
    int day; 
    int month; 
    int year; 
};
struct emp // created the datatype (blueprint)
{
    int empno; //4 
    char name[20]; //20
    double salary; //8  
    struct date join; //12  
};
int main( )
{
    struct emp e1={1,"Ketan",1000.00,{1,1,2000}};
    //printf("%d %s %.2lf, %d-%d-%d",e1.empno,e1.name,e1.salary,
    //                    e1.join.day,e1.join.month,e1.join.year);  
    struct emp e2; 
printf("Enter empid name and salary ,joining (day,month year)"); 
scanf("%d%s%lf%d%d%d",&e2.empno,e2.name,&e2.salary,
            &e2.join.day,&e2.join.month,&e2.join.year);    

    struct emp *p = &e2;    
printf("%d %s %2.lf,%d-%d-%d",p->empno,p->name,p->salary,
                    p->join.day,p->join.month,p->join.year);          
    return 0; 
}