#include<stdio.h>
#include<stdlib.h>
#define N 6
void min_heapfiy(int *arr,int index,int length);
void build_heap(int *arr,int length);
void exchange(int *src,int *dest);
void min_heap_sort(int *arr,int length);
int main(){
  int arr[] = {30,2,43,89,10,38};
  min_heap_sort(arr,N);
  for(int i = 0;i < N;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}
void min_heapfiy(int *arr,int index,int length){
  int left = 2 * index + 1;
  int right = 2 * index + 2;
  int smallest = index;
  if((left < length)&&(arr[left] < arr[smallest])){
    smallest = left;
  }else{ }
  if((right < length)&&(arr[right] < arr[smallest])){
    smallest = right;
  }
  if(smallest != index){
    exchange(&arr[index],&arr[smallest]);
    min_heapfiy(arr,smallest,length);
  }
}
void build_heap(int *arr,int length){
  for(int i = length/2 - 1; i >= 0;i--){
    min_heapfiy(arr,i,length);
  }
}
void min_heap_sort(int *arr,int length){
  build_heap(arr,length);
  int varlength = length;
  for(int i = varlength - 1; i > 0;i-- ){
    exchange(&arr[varlength - 1],&arr[0]);
    varlength--;
    min_heapfiy(arr,0,varlength);
  }
}
void exchange(int *src,int *dest){
  *src = *src ^ *dest;
  *dest = *src ^ *dest;
  *src = *src ^ * dest;
}
