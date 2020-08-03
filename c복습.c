#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(){
  char arr[SIZE], *chr = arr;
  int i,tmp;
  int length;

  printf("input string: ");
  scanf("%s",arr);

  printf("Inverse String: ");

  length = strlen(arr);

  for(i=length;i>=0;i--)
  {
    printf("%c",chr+i);
  }
  printf("\n");


  return 0;
}
