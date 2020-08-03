/*
임의로 저장된 배열의 최댓값, 최솟값, 그 위치 포인터로 보여주기
*/

#include <stdio.h>
#include <stdlib.h> //for srand()
#include <time.h> //for not repeated random numbers
//#include <string.h>
#define SIZE 20

//랜덤값 출력
void getrandomnumber(int *arr,int n);

//최댓값 찾는 함수
void checkmax(int *arr,int n);

//최솟값 찾는 함수

int main(){

  int i,len;
  int arr[SIZE], n;
  //int end=100,begin=1;

  srand(time(NULL));

  printf("arr[] = ");
  getrandomnumber(arr,6);

  checkmax(arr,6);

    return 0;
  }


void getrandomnumber(int *arr, int n){
  int i;
  int end=100, begin=1;

  for(int i=0;i<n;i++)
  {
    *(arr+i) = rand()%(end-begin+1)+1; //n개의 랜덤한 숫자, 범위는 1에서 10 사이 임의로 출력
  //  printf("%d ",*(arr+i));
    printf("%3d ",*(arr+i));
  }
  printf("\n");
}


void checkmax(int *arr,int n){
  int i,j;
  int max=arr[0];
  int max_position;

  for(i=0;i<n;i++)
  {
      if(arr[i] > max)
      {
        max = arr[i]; //최댓값:
        max_position = i+1; //몇번째에 위치?, i는 0부터 시작하니까 +1해준다
      }
    }

    printf("최댓값은: %d\n",max);
    printf("최댓값의 위치는 %d번째\n",max_position);
  }
