#include <stdio.h>
#include <stdlib.h> //malloc/free이용

int main() {
int size, sum, i;
int *score;

printf("학생수는? ");
scanf("%d",&size);

score = (int *)malloc(sizeof(int)*size); //5명의 학생수*점수(int형)

//실패
if (score == NULL) {
printf("동적 기억장소 할당에 실패하였습니다.\n");
exit(1);
}

//성공
sum = 0;
for (i = 0; i < size; i++) {
printf("%d번째 학생의 점수는? ", i + 1);
scanf("%d", &score[i]);
sum += score[i];
}
printf("\n%d명의 평균 : %.1lf\n", size, (double)sum / size);


free(score); //앞에서 score = #@@@ malloc()@#@; 할당해뒀던거 프리시키기
return 0;
}
