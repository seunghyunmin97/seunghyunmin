#include <stdio.h>

int main()
{

int score,grade;

printf("점수 입력: ");
scanf("%d",&score);

/*
90~100 A
80~89 B
70~79 C
60~69 D
else F
*/
grade = score/10;

switch(grade){
  case 10:
  case 9: printf("학점: A\n"); break;
  case 8: printf("학점: B\n"); break;
  case 7: printf("학점: C\n"); break;
  case 6: printf("학점: D\n"); break;
  default: printf("학점: F\n");

}
  return 0;
}
