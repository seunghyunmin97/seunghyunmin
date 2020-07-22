#include <stdio.h>

//수학점수에 따른 학점
/*
1등은 A
2. 3등 B
4, 5, 6등 C
7. 8. 9등 D
10등 F
*/

char grade(int score){

if(score)
}

//석차
int place{


}

//전체 정리

int main()
{
  int i,sid;
  int score;

  for(i=0;i<10;i++)
  {
      printf("%d번째 학생의 정보\n",i+1);

      //학번 입력받기
      do{
        printf("학번:\t\n");
        scanf("%d",&sid);

        if(sizeof(sid) != 16)
        {
          printf("학번은 4자리의 숫자로만 이루어짐.\n");
        }
      }while(sizeof(sid) != 16);

      //점수 입력받기
      do{
        printf("점수:\t\n");
        scanf("%d",&score);

        if(score<0 || score>100)
        {
          printf("성적은 0~100 사이 정수로만 입력가능!\n");
        }
      }while(score<0 || score>100);




      grade(score);

  }

  printf("===============\n석차\t학번\t학점\t수학점수\n===============\n");

  return 0;
}
