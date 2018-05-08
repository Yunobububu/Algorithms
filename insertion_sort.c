#include<stdlib.h>
#include<stdio.h>
#define N  6
void insertion_sort(int *arr){

  for(int i = 1;i < N;i++){
    int key = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] < key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
  }

}
int main(){
  int arr[] = {4,8,2,5,10,1};
  insertion_sort(arr);
  for(int k = 0;k < N;k++){
    printf("%d,",arr[k]);
  }
  return 0;
}
