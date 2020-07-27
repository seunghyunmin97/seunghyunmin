/*
  program comment
  : 작성지
  : 개발 기간
  : 검수자
  : 참고자료
*/
#include <stdio.h>
#include <string.h>

struct User{
	char name[10];
	char gender[3];
	int age;
};

int main(){
	struct User user[5] = {{"C", "여", 20},{"A", "남", 29}, {"D", "여", 25},{"R", "남", 22}, {"V", "여", 25}};

    int i,j,cntman=0, cntwoman=0;
    int avg;
    int sum=0;

  struct User tmp;

    printf("이름\t성별\t나이\t\n");
    printf("========================================\n");


    for(i=0;i<5;i++)
    {
      if(strcmp(user[i].gender,"여") == 0)
      {
        cntwoman++;
      }

      else cntman++;

    }

    for(i=0;i<5;i++)
    {
      for(j=0;j<4;j++)
      {
        if(user[j].age> user[j+1].age)
        {
          tmp = user[j];
          user[j] = user[j+1];
          user[j+1] = tmp;
        }
      }


    }


    for(i=0;i<5;i++)
    {
        printf("%s\t%s\t%d\t\n",user[i].name,user[i].gender,user[i].age);

          sum+=user[i].age;
          avg= sum/5;
      }


        printf("남자: %d명\n여자: %d명\n평균 연령: %d살 ",cntman,cntwoman,avg);

        return 0;
      }
