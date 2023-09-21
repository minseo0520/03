#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
   int a;
   int b;
   
   printf("분자를 입력하시오:");
   scanf("%d", &a);
   
   printf("분모를 입력하시오 :");
   scanf("%d", &b);
   
   printf("나누기 값의 결과는 %f 입니다", (float)a/b);
   return 0;
}
