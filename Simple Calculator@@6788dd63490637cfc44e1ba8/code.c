#include <stdio.h>
int main(){
    int a,b;
    char c;
    printf("");
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){printf("%d",a+b);}
    else if(c=='-'){printf("%d",a-b);}
    else if(c=='*'){printf("%d",a-b);}
    else if(c=='/'){printf("%d",a/b);}
    else{printf("Error");}
    return 0;
}