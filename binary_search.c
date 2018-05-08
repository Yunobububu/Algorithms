#include<stdio.h>
#include<stdlib.h>
#define N 6
int binary_search(int *arr,int start,int end,int value){
  int mid = (start + end)/2;
  if((arr[mid] > value) && (start < end)){
    binary_search(arr,start,mid,value);
    return 1;
  }else{
    binary_search(arr,mid+1,end,value);
    return 1;
  }
  return 0;
}
int main(){
  int arr[N] = {1,4,5,6,8,19};
  printf("%d",binary_search(arr,0,5,3));
}
