#include <stdio.h>

int main(){

  int plan; //요금제 선
  double data; //사용한 데이터량
  int tax=6000; //세금(종량)
  int a = 500*20; //1~500mb
  int b = 500*15; //501~1000mb
  int c = 1000*12; //1001~2000mb
  int sum=0;
  int total=6000;

  printf("핸드폰 플랜에 따른 요금을 계산하는 프로그램입니다.\n");
  printf("\n1. 무제한 요금제\n2. 종량제 요금제\n");
  printf("\n본인의 요금제 번호를 입력해주세요>> ");
  scanf("%d",&plan);

  printf("\n결과를 출력합니다.\n");

  //무제한이라면
   if(plan == 1)
   {
     printf("핸드폰 플랜: 무제한 요금\n");
     printf("기본료: 5,000원\n");
     printf("사용료: 50,000원\n");
     printf("세금: 5,500원\n");
     printf("요금 합계: 60,500원\n");
   }

  //종량제라
  else
  {
    printf("핸드폰 플랜: 종량제 요금\n");
    printf("기본료: 6,000원\n");

    printf("사용한 데이터량 입력해주세요 (GB단위로 입력)>> ");
    scanf("%lf",&data);
    data *= 1000;

    printf("사용한 데이터: %.0lfMB\n\n\n",data);

      if(data>=2001)
      {
        data = (data-2000)*10;
        sum = data+a+b+c;
        tax += sum;
        tax *= 0.15;
        total += tax+sum;

        printf("사용한 데이터 요금: %d\n",sum);
        printf("세금: %d\n",tax);
        printf("요금 합계: %d\n",total);
      }

      else if(data>=1001)
      {
        data= (data-1000)*12;
        sum = data+a+b;
        tax += sum;
        tax *= 0.15;
        total += tax+sum;

        printf("사용한 데이터 요금: %d\n",sum);
        printf("세금: %d\n",tax);
        printf("요금 합계: %d\n",total);
      }

      else if(data>=501)
      {
        data = (data-500)*15;
        sum = data+a;
        tax += sum;
        tax *= 0.15;
        total += tax+sum;

        printf("사용한 데이터 요금: %d\n",sum);
        printf("세금: %d\n",tax);
        printf("요금 합계: %d\n",total);
      }

      else
      {
        data*=20;
        sum = data;
        tax += sum;
        tax *= 0.15;
        total = tax+sum;

        printf("사용한 데이터 요금: %d\n",sum);
        printf("세금: %d\n",tax);
        printf("요금 합계: %d\n",total);
      }

      printf("\n");
  }

  return 0;
}
