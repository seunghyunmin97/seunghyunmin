#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

#define SIZE 50
//적어도 20자 이상의 영문자+숫자+기호의 임의의 문자열 입력받고 B호출
int A(char arr[SIZE])
{
  int len;

  do {
  printf("문자열 입력: ");
  scanf("%s",arr);

  //20자인지 확인, 작으면 경고메세
  do{
    len = sizeof(arr);

  if(len<20)
        {
          printf("20자 이상의 문자열을 입력해주세요!\n");
        }
  }while(len<20);

}while(arr[len] != NULL);


printf("%s(%d)\n",arr,len);
free(arr);

return 0;
}

//최초로 숫자가 연이어 3개일때의 값 > 아마 strcmp 이용
void B(char arr[SIZE])
{
  int i;
  for(i=0;i<SIZE;i++)
  {
      //ASCII code로 숫자인지 확인 아니면 넘기기 48~57 이 숫자범위

  }

  printf("최초의 연속된 숫자 : %s",arr[]);
}



int main()
{
  char arr[SIZE];

  printf("최소 20자 이상의 문자열 입력\n");
  A(arr);
//  B();

return 0;
}
