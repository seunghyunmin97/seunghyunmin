/*
문자열을 입력받고 반대로 출력*/

#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(){
  char arr[SIZE], *chr = arr;
  int i,tmp;
  int length;

  printf("Input string: ");
  scanf("%s",arr);

  printf("Inverse String: ");

  length = strlen(arr);
  chr = chr + length;
  // hello size = 5, index = 0~4
  for(i=0;i<length;i++){
    chr--;
    printf("%c", *chr);
  }
/*
  for(i=length;i>=0;i--)
  {
    printf("%c",*(arr+i));
  }
*/
  printf("\n");


  return 0;
}
