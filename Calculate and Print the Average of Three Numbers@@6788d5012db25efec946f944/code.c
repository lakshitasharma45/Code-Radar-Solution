#include <stdio.h>
int main() {
    int a,b,c;
    printf("");
    scanf("%d %d %d",&a,&b,&c);
    float x=float(a+b+c)/3;
    printf("Average: %.2f",x);
    return 0;
}