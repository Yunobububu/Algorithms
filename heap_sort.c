#include<stdio.h>
#include<stdlib.h>
#define N 6
void exchange(int *src,int *dest);
void heapfiy(int *arr,int index,int length);
void build_heap(int *arr,int length);
void heap_sort(int *arr,int length);
int main(){

    int arr[N] = {100,34,18,43,51,29};
    printf("before sort:");
    for(int i = 0;i < N;i++){
        printf("%d ",arr[i]);
    }
    heap_sort(arr,N);
    printf("sorted arr:\n");
    for(int i = 0;i < N;i++){
        printf("%d ",arr[i]);
    }
}
void heapfiy(int *arr,int index,int length){
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int largest = index;
    if((left < length )&&(arr[index] < arr[left])){
        largest = left;
    }else { largest = index;}
    if((right < length )&&(arr[largest] < arr[right])){
        largest = right;
    }
    if(largest != index){
        exchange(&arr[largest],&arr[index]);
        heapfiy(arr,largest,length);
    }
}
void build_heap(int *arr,int length){
    for(int i = length/2 - 1; i >= 0;i--){
        heapfiy(arr,i,length);
    }
}
void heap_sort(int *arr,int length){
      build_heap(arr,length);
    int varlength = length ;
    for(int i = length - 1;i > 0;i--){
        exchange(&arr[varlength - 1],&arr[0]);
        varlength--;
        heapfiy(arr,0,varlength);
    }
}
//use xor to exchange
void exchange(int *src,int *dest){
    *src = *src ^ *dest ;
    *dest = *src ^ *dest;
    *src = *src^ *dest;
}
