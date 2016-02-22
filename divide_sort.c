#include <stdio.h>

#define ARRAY_SIZE(array) (sizeof(array)/sizeof(array[0]))
#define MAX_INT (2147483647)

void Merge(int array[],int start,int end) {
  int arrayLeft[50];
  int arrayRight[50];
  int i,j=0,k=0;
  
  for(i=start;i<(start+end)/2;i++)
    arrayLeft[j++] = array[i];
  for(i=(start+end)/2;i<end;i++)
    arrayRight[k++] = array[i];

  arrayLeft[j] = arrayRight[k] = MAX_INT;

  j=k=0;
  for(i=start;i<end;i++) {
    if(arrayLeft[j]>arrayRight[k]) {
      array[i] = arrayRight[k++];
    } else {
      array[i] = arrayLeft[j++];
    }
  }

}

void DivideSort(int array[],int start,int end) {
  if((end - start)==1)
    return ;
  DivideSort(array,start,(start+end)/2);
  DivideSort(array,(start+end)/2,end);
  Merge(array,start,end);
}

void PrintArray(int array[],int num){

  int i;

  for(i=0;i<num-1;i++){
    printf("%d,",array[i]);
  }

  printf("%d\n",array[i]);

}

int main() {
   
  int array[10] 	= {3,92,33,6,2,33,50,41,32,70};
  
  printf("array to be sort:\n");
  PrintArray(array,ARRAY_SIZE(array));

  DivideSort(array,0,10);

  printf("after sort:\n");
  PrintArray(array,ARRAY_SIZE(array));

  return 0;
}
