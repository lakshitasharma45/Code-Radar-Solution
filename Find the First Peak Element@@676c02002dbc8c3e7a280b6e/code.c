#include <stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
   } 
   for(int i=0;i<a;i++){
    if(a[i]>a[i-1] && a[i]>a[i+1]){
        printf("%d",arr[i]);
        break;
    }
   }
   return 0;
}