#include <stdio.h>
int main(){
    int a,b;
    char c;
    printf("");
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    if(c=='+'){printf("%d",a+b);}
    else if(c=='-'){printf("%d",a-b);}
    else if(c=='*'){printf("%d",a*b);}
    else if(c=='/'){if(b==0){
        printf("error");}
        else{printf("%d",a/b);}
}
    else{printf("error");}
    return 0;
}