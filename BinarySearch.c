#include<stdio.h>
#include<stdlib.h>

int binarySearch(int key, int size, int* array){
  int lower = 0;
  int upper = size - 1;
  int mid; // will be defined later

  while (lower<=upper) {
    mid =  (lower+upper)/2;
    if (array[mid] == key)
      return mid;
    else if (array[mid] < key)
      lower = mid+1;
    else
      upper = mid;
  }

  return -1;
}

int main() {
  int size,key,i;
  int *array;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  array = (int*) malloc(size*sizeof(int));
  printf("Enter the array in sorrted manner");
  for(i=0;i<size;i++)
    scanf("%d",&array[i]);
  printf("Enter the key to be searched\n");
  scanf("%d",&key);
  key = binarySearch(key,size,array);
  if(key==-1)
    printf("Not Found");
  else
    printf("Found at position:%d",key+1);
  return 0;
}
