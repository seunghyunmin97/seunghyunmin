#include <stdio.h>

int main()
{
  int n;
  int odd=0,even=0; //odd = oddsum, even = evensum

  printf("정수 n 입력: ");
  scanf("%d",&n);

  for(int i=0;i<n+1;i++)    // int i = 0, int j=0 ; i < n+1 , j <n+1; i++, j++
  {
    if(i%2 == 0) even+=i;
    else odd+=i;
  }


  printf("정수 1에서 %d 이하 홀수들의 합은 %d이고, 짝수들의 합은 %d입니다.\n",n,odd,even);
    return 0;
}
