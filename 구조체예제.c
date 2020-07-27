#include <stdio.h>
#include <string.h>


struct person{
  char name[20];
  int age;
  char address[100];
};

int main(){
  struct person whoareyou;

  printf("다음과 같은 목록을 입력해주세요: \n");

  printf("\n이름: ");
  scanf("%s",whoareyou.name);

  printf("\n나이: ");
  scanf("%d",&whoareyou.age);

  printf("\n주소: ");
  scanf("%s",whoareyou.address);

  printf("입력한 내용을 출력합니다.\n이름: %s\n나이: %d\n주소: %s\n",whoareyou.name,whoareyou.age,whoareyou.address);

  return 0;
}
