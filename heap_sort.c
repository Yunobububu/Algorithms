#include<stdio.h>
#include<stdlib.h>
#define N 6
void exchange(int *src,int *dest);
void heapfiy(int *arr,int index);
void build_heap(int *arr);
void heap_sort(int *arr,int index);
int main(){

    int arr[N] = {10,34,1,43,10,9};
    printf("before sort:");
    for(int i = 0;i < N;i++){
        printf("%d ",arr[i]);
    }
    printf("after sort:");
    build_heap(arr);
    for(int i = 0;i < N;i++){
        printf("%d ",arr[i]);
    }
}
void heapfiy(int *arr,int index){
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int largest = index;
    if((left <= N )&&(arr[index] < arr[left])){
        largest = left;
    }else { largest = index;}
    if((right <= N )&&(arr[largest] < arr[right])){
        largest = right;
    }
    if(largest != index){
        exchange(&arr[largest],&arr[index]);
        heapfiy(arr,largest);
    }
}
void build_heap(int *arr){
    for(int i = N/2 -1; i >= 0;i--){
        heapfiy(arr,i);
    }
}
void heap_sort(int *arr,int index){

}
//use xor to exchange
void exchange(int *src,int *dest){
    *src = *src ^ *dest ;
    *dest = *src ^ *dest;
    *src = *src^ *dest;
}
