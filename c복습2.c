/*
임의로 입력받은 숫자를 배열에 저장 후 배열의 모든 원소를 곱하는 포인터 방식을 출력해보자.
*/


#include <stdio.h>
#include <stdlib.h> // srand
#include <time.h> //중복피하기 위해서
#define SIZE 10
//랜덤한 숫자 받기
void getrandomnumber(int *arr, int n);
void multiplyeverything(int *arr, int n);

int main(){

  int i,arr[SIZE];

  srand(time(NULL));
  getrandomnumber(arr,3);
  multiplyeverything(arr,3);

  return 0;
}


void getrandomnumber(int *arr, int n){
  int i;
  int end=10,begin=1;

  for(int i=0;i<n;i++)
  {
    *(arr+i) = rand()%(end-begin+1)+1; //n개의 랜덤한 숫자, 범위는 1에서 10 사이 임의로 출력
    printf("arr[%d] = %d\n",i,*(arr+i));
  }
}

void multiplyeverything(int *arr, int n){

  int i,j;
  int mtp=1;

  for(i=0;i<n;i++)
  {
      printf("arr[%d] * ",i); //곱하기 어디에ㅠㅠ???

    mtp *= arr[i];

  }


  printf("\b\b= %d\n",mtp);
}
