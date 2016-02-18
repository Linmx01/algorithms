#include <stdio.h>

#define ARRAY_SIZE(array) (sizeof(array)/sizeof(array[0]))

void InsertSort(int array[],int num){
 
  int i,j;

  for(i=1;i<num;i++){
    int key = array[i];
    for(j=i-1;j>=0;j--){
      if(array[j]>key){
        array[j+1]=array[j];
      }else{
        break;
      }
    }
    array[j+1]=key;
  }
   
}

void PrintArray(int array[],int num){

  int i;

  for(i=0;i<num-1;i++){
    printf("%d,",array[i]);
  }

  printf("%d\n",array[i]);

}

int main(){

  int array[10] 	= {3,92,33,6,2,33,50,41,32,70};

  printf("array to be sort:\n");
  PrintArray(array,ARRAY_SIZE(array));

  InsertSort(array,ARRAY_SIZE(array));

  printf("after sort:\n");
  PrintArray(array,ARRAY_SIZE(array));

  return 0;

}

