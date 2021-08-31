#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int max=0,i;
    int arr[4]={a,b,c,d};
    for(i=0;i<=3;i++);{ // {} don't forget it,as multiple lines of FOR loop
    if(max<arr[i])
     max=arr[i];
     }
// if(max<a)
// max=a;
// if(max<b)
// max=b;
// if(max<c)
// max=c;
// if(max<d)
// max=d;
    return max;    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

