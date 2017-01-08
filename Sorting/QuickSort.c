#include <stdio.h>
#include <stdlib.h>

int *array;
int size;

int partition(int left, int right, int pivot) {
   int leftPointer = left -1;
   int rightPointer = right;
   int temp;

   while(1) {
      while(array[++leftPointer] < pivot) {
         //do nothing
      }

      while(rightPointer > 0 && array[--rightPointer] > pivot) {
         //do nothing
      }

      if(leftPointer >= rightPointer) {
         break;
      } else {
        temp = array[leftPointer];
        array[leftPointer] =  array[rightPointer];
        array[rightPointer] = temp;
      }
   }
   temp = array[leftPointer];
   array[leftPointer] = array[right];
   array[right] = temp;
   return leftPointer;
}

void quickSort(int left, int right) {
  int pivot,partitionPoint;
   if(right-left <= 0) {
      return;
   } else {
      pivot = array[right];
      partitionPoint = partition(left, right, pivot);
      quickSort(left,partitionPoint-1);
      quickSort(partitionPoint+1,right);
   }
}

int main() {
  int i;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  array = (int*) malloc(size*sizeof(int));
  printf("Enter the array in unsorrted manner\n");
  for(i=0;i<size;i++)
    scanf("%d",&array[i]);
  quickSort(0,size-1);
  printf("After sorting\n");
  for(i=0;i<size;i++)
    printf("%d ",array[i]);
  return 0;
}
