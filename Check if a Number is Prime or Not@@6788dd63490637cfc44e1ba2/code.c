#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int prime=1;
    for(int i=2,i<a,i++){
        if(a%i==0){prime=0;break;}
    }
    if(prime){printf("Prime");}
    else{printf("Not Prime");}
    return 0;
    
}