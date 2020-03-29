#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) 
{ 
 int x,y;
 x = *a + *b;
 y = abs(*a - *b);
*a=x;
*b=y;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
 // setting two variables acc. to hackerRank test case 
    a= 5;
    b= 4;
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}
