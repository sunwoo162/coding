#include <stdio.h>
int main() {
	int score;											//정수형 변수 선언
	printf("성적을 입력하시오.\n");						// 성적을 입력하시오 출력
	scanf("%d", &score);								//score 입력
	if (score >= 70)									//if문 조건 비교
		printf("합격입니다.\n");						// if의 결과에 따라 출력
	return 0;
}
