#include<stdio.h>
#include<stdlib.h>

void selectionSort(int size, int* array){
  int i,j,minIndex,temp;

  for(i=0;i<size;i++){
    minIndex = i;

    for(j=i+1;j<size;j++){
      if(array[j]<array[minIndex]){
        minIndex = j;
      }
    }

    if (minIndex!=i) {
      temp = array[minIndex];
      array[minIndex] = array[i];
      array[i] = temp;
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
  selectionSort(size,array);
  printf("After sorting\n");
  for(i=0;i<size;i++)
    printf("%d ",array[i]);
  return 0;
}
