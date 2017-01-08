#include<stdio.h>
#include<stdlib.h>

int *array,*tempArray;
int size;

void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(array[l1] <= array[l2])
         tempArray[i] = array[l1++];
      else
         tempArray[i] = array[l2++];
   }

   while(l1 <= mid)
      tempArray[i++] = array[l1++];

   while(l2 <= high)
      tempArray[i++] = array[l2++];

   for(i = low; i <= high; i++)
      array[i] = tempArray[i];
}

void mergeSort(int low, int high) {
   int mid;

   if(low < high) {
      mid = (low + high) / 2;
      mergeSort(low, mid);
      mergeSort(mid+1, high);
      merging(low, mid, high);
   } else {
      return;
   }
}


int main() {
  int i;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  array = (int*) malloc(size*sizeof(int));
  tempArray = (int*) malloc(size*sizeof(int));
  printf("Enter the array in unsorrted manner\n");
  for(i=0;i<size;i++)
    scanf("%d",&array[i]);
  mergeSort(0,size);
  printf("After sorting\n");
  for(i=0;i<size;i++)
    printf("%d ",array[i]);
  return 0;
}
