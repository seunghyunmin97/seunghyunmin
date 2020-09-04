/*
학번순대로 정렬 - 오름차순
*/

#include <stdio.h>

//학번 4자리 수인지 확인 하는 함수
int hakbeon(int sid)
{
  int cnt=0;

  while(sid != 0){
    sid /= 10;
    cnt++;
  }
  return cnt;
}

//학번 오름차순 정렬
void sorting(int sid[10])
{
  int i,j;
  int tmp;

  for(i=0;i<10;i++)
  {
    for(j=0;j<9;j++)
    {
      if(sid[j] > sid[j+1])
      {
        tmp = sid[j];
        sid[j] = sid[j+1];
        sid[j+1] = tmp;
      }
    }

  }


  for(i=0;i<10;i++)
  {
    //석차 함수 불러서 프린트;
    printf("%d\n",sid[i]);
  }
}

//상대평가 점수ㅜ
void mark(int score[10])
{
  int i;

  for(i=0;i<10;i++)
  {
    int max = score[0];
    if(max<score[i])
      max = score[i];
      printf("%d",max);
  }
}


int main(){

  int sid[10], score[10];
  int i;
  //int len;
  int cnt=0;


  for(i=0;i<10;i++)
  {
    printf("%d번째 학생의 정보>>\n",i+1);

    do{
    printf("\t학번: ");
    scanf("%d",&sid[i]);

    if(hakbeon (sid[i])!= 4)
    {
      printf("학번은 4자리 수여야 함.\n");
    }
  }while(hakbeon(sid[i]) != 4);

  do{
    printf("\t점수: ");
    scanf("%d",&score[i]);

    if(score[i] >100 ||score[i] <0)
    {
      printf("점수는 0~100 사이 정수만 인정.\n");
    }
  }while(score[i] >100 ||score[i] <0);

  printf("\n");
}

printf("석차\t\t학번\t\t학점\t\t수학점수\t\t\n\n");
sorting(sid);


  return 0;
}
