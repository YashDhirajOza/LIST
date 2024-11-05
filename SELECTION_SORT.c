# include<stdio.h>
#include<stlib.h>
void selectionsort(int arr[],int n){
  for (int i=0;i<n-1;i++){
     min_idx=i;
    for (int j=i+1;j<n-1;j++){
          if(arr[j] <arr[min_idx]){ min_idx=j};
    }
  int temp= arr[i];
arr[i]=arr[min_idx];
arr[min_idx]=temp;
  }
}
int main(){
  int arr[]={1,6,7,4,5,8,0};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr,n);
  return 0;
}
   





