#include <stdio.h>

int main()
{
int arr[5];
int min=0;


for(int i=1;i<6;i++)
{
  printf("%d번째 숫자: ",i);
  scanf("%d",&arr[i-1]);

  if(arr[i] <= arr[i+1])
  {
    min = arr[i];
  }

  else min = arr[i+1];
}






  return 0;
}
