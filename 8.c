#include <stdio.h>
#define SIZE 10

/*
1등은 A
2. 3등 B
4, 5, 6등 C
7. 8. 9등 D
10등 F
*/



//석차 << 수학점수로 비교.
int place(int score){
  int arr[SIZE];
  int tmp,i,j;

  //higher score, higher number(place) 버블소트로 바꾸
  for(i=0;i<SIZE;i++)
  {
    for(j=0;j<SIZE-1;j++)
    {
      if(arr[j] > arr[j+1])
      {
        tmp=arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }

  for(i=0;i<SIZE;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
  }



//학점 (알파벳))
char grade(int score){

switch(score){
  case 1: printf("A"); break;
  case 2:
  case 3: printf("B"); break;
  case 4:
  case 5:
  case 6: printf("C"); break;
  case 7:
  case 8:
  case 9: printf("D"); break;
  case 10: printf("F"); break;
}
return 0;
}

//학번 오름차순으로 정렬 낮>높 (함수2)
void hakbeon(int sid){
  int tmp,i,j;
  int arr[SIZE];


  for(i=0;i<SIZE;i++)
  {
    scanf("%d",&arr[i]);

    for(j=0;j<SIZE-1;j++)
    {
      if(arr[j] > arr[j+1])
      {
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }

  for(i=0;i<SIZE;i++)
  {
    printf("%3d\n",arr[i]);
  }

}

//학번 4자리 수인지 확인(함수3)
int countDigit(int n)
  {
      int cnt = 0;
      while (n != 0) {
          n = n / 10;
          ++cnt;
      }
      return cnt;
  }

//전체 정리

int main()
{
  int i,sid;
  int score;

for(i=0;i<SIZE;i++)
  {
      printf("%d번째 학생의 정보\n",i+1);

      //학번 입력받기
      do{
        printf("학번: ");
        scanf("%d",&sid);

        if(countDigit(sid) != 4)  //질문:sizeof(sid)/sizeof(int) 이용해서?? int to str/char
        {
          printf(">>>학번은 4자리의 숫자로만 이루어짐.\nㅇ\n");
        }
      }while(countDigit(sid) != 4);

      //점수 입력받기
      do{
        printf("점수: ");
        scanf("%d",&score);
        printf("\n");
        if(score<0 || score>100)
        {
          printf("성적은 0~100 사이 정수로만 입력가능!\n");
        }
      }while(score<0 || score>100);


    //grade(score);

  }

  printf("================================\n석차\t학번\t학점\t수학점수\n================================\n");

  hakbeon(sid);
  grade(score);


  return 0;
}
