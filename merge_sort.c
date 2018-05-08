#include<stdio.h>
#include<stdlib.h>
#define N 6
#define MAX  65536
void merge(int *arr,int p,int q,int r);
void merge_sort(int *arr,int p,int r);
int main(){
  int arr[] = {2,10,4,3,2,0};
  merge_sort(arr,0,N-1);
  for(int i = 0;i < N;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}
void merge(int arr[],int p,int q,int r){
    int n1 = q - p + 1 ;
    int n2 = r - q ;
    /*
    *动态的为左右数组分配内存,如果只是定义int L[],int R[]呢？也可以
    */
    //int *L = (int *)malloc(sizeof(int)*(n1 + 1));
    //int *R = (int *)malloc(sizeof(int)*(n2 + 1));
    int L[n1 + 1];
    int R[n2 + 1];
    int l = p,rt = q;
    for(int i = 0;i < n1;i++){
        L[i] = arr[l++];
    }
    L[n1] = MAX;
    for(int i = 0;i < n2;i++){
        R[i] = arr[rt++ + 1];
    }
    R[n2] = MAX;
    int m = 0,n = 0;

    for(int i = p;i <= r;i++){
        if(L[m] < R[n]){
            arr[i] = L[m];
            m ++;
        }else{
            arr[i] = R[n];
            n++;
        }

    }
    //free(L);
    //free(R);
}
void merge_sort(int arr[],int p,int r){
    if(p < r){
        int q = (p + r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r);
    }

}
