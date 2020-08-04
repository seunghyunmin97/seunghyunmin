
/*
랜덤한 문자열 두개 받고 가장 처음 동일한 문자와 그 위치 출력
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SIZE 20

//랜덤한 스트링 받
void randomstring (char *arr, int n) //n크기의 스트링 받기
{
  int i;
  int end=90, begin=65; //대문자만 일단 허용 90=Z, 65=A
  for(i=0;i<n;i++)
    {
        *(arr+i) = rand()% (end-begin+1)+65;
    //    printf("%s",arr[i]);
    }
    arr[i] = '\0';
    printf("%s\n",arr); //랜덤한 문자열 출력
}

//같은 문자/알파벳인지 확인
void sameletter (char *arr1, int m, char *arr2, int n)
{
  int i,j;
  int cnt=1;

/*  if(strcmp(arr1,arr2) != 0)
  {
    printf("일치하는 문자가 없음.\n");
    cnt++;
  }
*/

  for(i=0;i<m;i++)
  {
    if(strcmp(arr1[i],arr2[i]) == 0) //arr의 i번째 문자와 arr2의 j번째 문자가 같다면,
      {// abc, dbc  bc
        printf("같은 글자: %c\n",arr2[j]);

      }




    }
  //  cnt++;
  }
//  printf("%d",cnt);
}





int main(){

  char arr1[SIZE],arr2[SIZE];
  //문자열 입력받기
  srand(time(NULL)); //랜덤

  randomstring(arr1,5); //문자열 랜덤하게 하나 받기
  randomstring(arr2,5); //두번째 문자열 받기

  sameletter(arr1,5,arr2,5);



  return 0;
}
