#include <stdio.h>
int main()
{

    int num = 10;
    int *ptr = &num;
    *ptr = 30;
     
    char ch = 'A';
    char *cptr = &ch;

    float fvar = 11.3f;
    float *fptr = &fvar;

    double dvar = 10.3;
    double *dptr = &dvar;

    printf("%d %c %.2f %.2lf", *ptr, *cptr, *fptr, *dptr);

    return 0;
}
