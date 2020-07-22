#include <stdio.h>
#define SIZE 10
int main()
{
  int n,i,j;
  int score,ass,sum=0;
  double avg;
  int final;
  int cnt=0;

  printf("학생의 시험성적과 과제 성적으로 평균값과 학점을 부여합니다.\n");


  for(i=0;i<10;i++)
    {
      printf("---%d번째 학생 성적 확인---\n",i+1);

      do{

      printf("시험 성적: ");
      scanf("%d",&score);

      if(score> 100 || score<0)
      {
        printf("0과 100 사이 정수만 입력가능.\n");
        cnt++;


      //3회이상 오류
      if(cnt>3)
      {
        printf("입력된 값 오류로 프로그램 종료(3회 이상 오류)\n");
        return 0;
      }

    }
  }
}while(score<0 || score>100);


      printf("과제 성적: ");
      scanf("%d",&ass);

      sum = score+ass;
      avg = (double)sum/2;

      /*
      F: 0~40
      C: 41~50
      C+: 51~60
      B: 61~70
      B+: 71~80
      A: 81~90
      A+: 91~100
      */

      printf("성적 정산 결과: %d번째 학생의 성적은 ",i);

      if(avg>= 91.00 && avg<=100.00)
        printf("A+ );

      else if(avg>= 81.00)
          printf("A",avg);

      else if(avg>= 71.00)
          printf("B+");

      else if(avg>= 61.00)
          printf("B");

        else if(avg>= 51.00)
              printf("C+");
        else if(avg>=41.00)
          printf("C");

        else printf("F");




printf("(%.2f)입니다.\n",avg");
}
/*  switch(final){
    case 9:
    printf("성적 정산 결과: %d번 학생의 성적은 A+(%.2f) .\n",i,avg);
    break;

    case 8:
    printf("성적 정산 결과: %d번 학생의 성적은 A(%.2f) .\n",i,avg);
    break;

    case 7:
    printf("성적 정산 결과: %d번 학생의 성적은 B+(%.2f) .\n",i,avg);
    break;

    case 6:
    printf("성적 정산 결과: %d번 학생의 성적은 B(%.2f) .\n",i,avg);
    break;

    case 5:
    printf("성적 정산 결과: %d번 학생의 성적은 C+(%.2f) .\n",i,avg);
    break;

    case 4:
    printf("성적 정산 결과: %d번 학생의 성적은 C(%.2f) .\n",i,avg);
    break;

    default:
    printf("성적 정산 결과: %d번 학생의 성적은 F(%.2f) .\n",i,avg);


  }
  */





  return 0;
}
