// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    for(int i=0;i<a;i++){
        if(arr[i]==T){
        printf("%d",i);
        break;
    }
    else{printf("&d",-1);}}
    return 0;
}