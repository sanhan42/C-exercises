/* two_fuc.c -- 하나의 파일에서 두 개의 함수를 사용하는 프로그램 */
#include <stdio.h>
void butler(void);	/* ANSI/ISO C 함수 프로토타입 */
int main(void)
{
	printf("butler 함수 밖에 있느냐?\n");
	butler();
	printf("그래. 차 한 잔 내오고, DVD도 가져오너라.\n");

	return 0;
}

void butler(void)	/* 함수 정의의 시작 */
{
	printf("네, 부르셨나요?\n");
}
