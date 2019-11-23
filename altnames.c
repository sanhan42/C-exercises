//  정수형을 나타내는 이식 가능한 이름들.
// 이식 가능한 데이터형과, 연관된 포맷 지정자의 사용법을 설명하는 짧은 예제

#include <stdio.h>
#include <inttypes.h> // 이식 가능한 이름들을 지원한다.
int main(void)
{
    int32_t me32; // me32는 32비트 부호 있는 정수형 변수

    me32 = 45933945;
    printf("먼저, int32_t를 int형이라고 가정한다: ");
    printf("me32 = %d\n", me32);
    printf("이제, 어떠한 가정도 하지 말자. \n");
    printf("그 대신에, inttypes.h에 있는 \"macro\"를 사용한다: ");
    printf("me32 = %" PRId32 "\n", me32);
    // printf("me32 = %" "d" "\n", me32);   // PRId32는 inttypes.h에 정의되어 있는 "d"로 대체됨.
    // C는 연속된 큰따옴표 문자열들을 하나의 큰따옴표 문자열로 결합한다.

    return 0;
}