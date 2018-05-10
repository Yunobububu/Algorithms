#include<stdio.h>
#include<stdlib.h>
#define N 5
int partition(int *arr,int p,int r);
void quick_sort(int *arr,int p,int q);
void exchange(int *src,int *dest);
int main(){
    int arr[] = {2,3,1,5,8};
    printf("before sort:\n");
    for(int i = 0;i < N;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    quick_sort(arr,0,N -1);
    printf("after sort:\n");
    for(int i = 0;i < N;i++){
        printf("%d ",arr[i]);
    }
}
int partition(int *arr,int p,int r){
    int index = p - 1;
    int pivotal = arr[r];
    for(int j = p;j < r;j++){
        if(arr[j] >  pivotal){
            index++;
            exchange(&arr[index],&arr[j]);
        }
    }
    exchange(&arr[index + 1],&arr[r]);
    return index + 1;
}
void quick_sort(int *arr,int p,int r){
    int q = partition(arr,p,r);
    if(p < q){
        partition(arr,p,q - 1);
        partition(arr,q,r);
    }
}
//一下算法有缺陷，当src = dest 时,*src = *dest = 0;原因待查；
// void exchange(int *src,int *dest){
//   *src = *src ^ *dest;
//   *dest = *src ^ *dest;
//   *src = *src ^ *dest;
// }
void exchange(int *src,int *dest){
    int temp = *src;
    *src = *dest;
    *dest = temp;
}
