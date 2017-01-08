#include<stdio.h>
#include<stdlib.h>

void insertionSort(int size, int* array){
  int i,position,temp;

  for(i=1;i<size;i++){
    temp = array[i];
    position = i;
    while(position > 0 && array[position-1] > temp){
      array[position] = array[position-1];
      position--;
    }
    if(position!=i){
      array[position] = temp;
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
  insertionSort(size,array);
  printf("After sorting\n");
  for(i=0;i<size;i++)
    printf("%d ",array[i]);
  return 0;
}
