#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<a;i++){
    if(arr[i]!=0){
        arr[count++]=arr[i];
    }}
    
    while(count<a){
        arr[count++]=0;}
    
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
}
