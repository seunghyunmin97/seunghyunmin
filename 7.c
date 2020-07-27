#include <stdio.h>


int get_year(int year){
  int size;
  //int tmp;
  printf("년도를 입력해주세요: ");


do
{
      scanf("%d",&year);

      size = sizeof(year)/sizeof(int);
      if(size != 4)
      {
        printf(">>4자리 수로 입력해주세요.\n");
      }

  }while(size!=4);


  return year;
}

/*int get_day(int day){

}

void calc_month_day(int year, int day){

}

*/

int main()
{
int year,day;

printf("입력한 년도의 입력한 일째의 요일을 계산합니다. \n");



do{

  get_year(year);
  if(year>2999 || year<2000)
    {
      printf(">>2000~2999년만 인정됨.\n\n");
    }
    else printf("%d\n",year);
}while(year>2999 || year<2000);


//get_day();
//calc_month_day();


  return 0;
}
