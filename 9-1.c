#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){

    int len;
    char arr[SIZE];
    int i,j;

    //문자열 입력받기 (A)
    do{
        printf("최소 20자 이상 입력: ");
        scanf("%s",arr);

        len = strlen(arr);

        if(len<20)
        {
            printf(">>>20자 이상만 입력 가능!\n\n");
        }
      }while(len<20);

    printf("입력된 문자열 : %s (글자 수 : %d) \n",arr,len);


    //최초로 숫자가 3개 연이어 연속? from A
    //48~57 이 숫자범위

    for(i=0;i<len;i++)
    {
      if(strcmp(arr[i],arr[i+1]) = -1) //앞 문자열이 더 클 때
      {
        
      }

    }
    for(i=0;i<len;i++)
    {
        printf("최초의 연속된 숫자: %s",arr[i]);
    }

    printf("\n");

    return 0;
}
