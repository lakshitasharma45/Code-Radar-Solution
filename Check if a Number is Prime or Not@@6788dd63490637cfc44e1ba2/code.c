#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int prime=0;
    for(i=2;i<a;i++){
        if(a%2!=0){
            prime=1;break;
            }
        }
    if(prime){
        printf("Prime");
        }
    else{printf("Not Prime");}
    return 0;
}