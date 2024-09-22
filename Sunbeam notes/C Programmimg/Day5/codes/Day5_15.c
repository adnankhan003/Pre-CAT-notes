#include<stdio.h> 
void sumpro(int *a, int *b, int *ps, int *pp) {

    *ps = *a + * b; 
    //*ps => address of s => *a => 12  *b => 4 
    // 12 + 4 => 16  
     *pp = *a * *  b; 
    //*pp => address of p => *a => 12  *b => 4 
    // 12 * 4 => 48  
}
int main() {
 int x = 12, y = 4, s, p;
 sumpro(&x, &y, &s, &p);
 printf("%d %d", s, p); //16 48 
 return 0;
}
