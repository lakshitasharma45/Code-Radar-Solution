#include <stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d",&a);
    int i;
    for(i=0;i<a;i++){
        for(int j=0;j<i;j++){
            printf("* ");
          
        }
        printf("\n");
    }
    return 0;
}