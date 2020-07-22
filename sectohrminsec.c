#include <stdio.h>

int main()
{

int sec;
int hr,min,sec2;

printf("초(sec)입력:");
scanf("%d",&sec);

hr = sec/60/60;
min = (sec-(hr*3600))/60;
//min = sec/60;
sec2 = sec%60;

printf("\n입력한 %d초는 %d시간 %d분 %d초 입니다",sec,hr,min,sec2);

return 0;
}
