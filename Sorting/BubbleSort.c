#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int size, int* array){
  int i,j,temp;
  for(i=0;i<size-1;i++){
    for(j=0;j<size-1-i;j++){
      if(array[j]>array[j+1]){
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}

int main() {
  int size,i;
  int *array;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  array = (int*) malloc(size*sizeof(int));
  printf("Enter the array in unsorrted manner\n");
  for(i=0;i<size;i++)
    scanf("%d",&array[i]);
  bubbleSort(size,array);
  printf("After sorting\n");
  for(i=0;i<size;i++)
    printf("%d ",array[i]);
  return 0;
}
