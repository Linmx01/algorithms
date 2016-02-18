#include <stdio.h>

void InsertSort(int array[],int num){
 
  int i,j;

  for(i=1;i<num;i++){
    int key = array[i];
    for(j=i-1;j>=0;j--){
      if(array[j]>key){
        array[j+1]=array[j];
      }else{
        array[j+1]=key;
        break;
      }
    }
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

  int num		= 10;
  int array[10] 	= {3,92,33,6,2,33,50,41,32,70};

  printf("array to be sort:\n");
  PrintArray(array,num);

  InsertSort(array,num);

  printf("after sort:\n");
  PrintArray(array,num);

  return 0;

}

