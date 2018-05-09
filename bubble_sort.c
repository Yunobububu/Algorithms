#include<stdio.h>
#include<stdlib.h>
#define N 5
void exchange(int *src,int *des){
	*src = *src ^ *des;
	*des = *src ^ *des;
	*src = *src ^ *des;
}
void bubble_sort(int *arr);
int main(){
	int arr[] = {5,20,3,5,7};
 	bubble_sort(arr);
 	for(int i = 0;i < N;i++){
	printf("%d ",arr[i]);
}
 return 0;
}
void bubble_sort(int *arr){
	int flag = 0;
	while(!flag){
	flag = 1;
  for(int j = 0;j < N -1;j++){
  	if(arr[j+1] < arr[j]){
		exchange(&arr[j],&arr[j+1]);
		flag = 0;
	}

}

}
}
