#include <stdio.h>

int main(){

  int i,j;
  int score[10];
  int hw[10];
  int cnt=0;
  double avg;
  int sum=0;

  printf("학생의 시험 성적과 과제 성적으로 평균값과 학점을 부여합니다.\n");


//시험+과제 성적 한번에 묻기
  for(i=0;i<10;i++)
  {
    printf(">>>%d번째 학생 성적 확인<<<\n",i+1);

    printf("시험성적: ");
    scanf("%d",&score[i]);

    if(score[i] > 100 || score[i]<0)
    {
      printf("성적은 0~100 사이 정수만 가능\n");
      cnt++;

      if(cnt>=3)
      {
        printf("\n입력된 값 오류로 프로그램 종료함.\n");
        return 0;
      }

    }

    else{

      printf("과제 성적: ");
      scanf("%d",&hw[i]);


    sum = hw[i]+score[i];
    avg = (double)sum/2;

    printf("성적 정산 결과: %d번 학생의 성적은 ",i+1);

    if(avg>=91)
      printf("A+ (%.2lf) 입니다.\n\n",avg);

    else if(avg>=81)
        printf("A (%.2lf) 입니다.\n\n",avg);

    else if(avg>=71)
        printf("B+ (%.2lf) 입니다.\n\n",avg);

    else if(avg>=61)
        printf("B (%.2lf) 입니다.\n\n",avg);

    else if(avg>=51)
        printf("C+ (%.2lf) 입니다.\n\n",avg);

    else if(avg>=41)
        printf("C (%.2lf) 입니다.\n\n",avg);

    else printf("F (%.2lf) 입니다.\n\n",avg);

    }

}

  return 0;
}
