#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int x=-1;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]==arr[j]){
                x=arr[i];
                break;
            }
        }}
                printf("%d",x);
    return 0;
}