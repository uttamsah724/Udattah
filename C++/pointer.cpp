// The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.
// In C lang though
#include <stdio.h>

void update(int *a,int *b) {
     int absdiff = (*a - *b)>0 ? (*a - *b) : (*b - *a);
     *a = (*a)+(*b);
     *b = absdiff ;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

