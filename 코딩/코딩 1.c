#include<stdio.h>
int main() {
	int score;											//정수형 변수 선언
	printf("성적을 입력하시오.\n");						// 성적을 입력하시오 출력
	scanf("%d", &score);								//score 입력
	if (score >= 70)									//if문 조건 비교
		printf("합격입니다.\n");						// if의 결과에 따라 출력
	return 0;
}

#include<stdio.h>
int main() {
	int age;													//변수 age 선언
	printf("당신의 나이는?(1.15세 이상, 2.15세 미만):");		//당신의 나이는?(1.15세 이상, 2.15세 미만):출력
	scanf("%d", &age);											//입력 명령
	if (age == 1) {												//나이가 1일때
		printf("입장 가능합니다.\n");							//입장 가능합니다 출력
	}
	if (age == 2) {												//나이가 2일때
		printf("입장할 수 없습니다.\n");						//입장할 수 없습니다 출력
	}
	return 0;
}

#include<stdio.h>
int main() {
	int age;													//변수 age 선언
	printf("당신의 나이는 ?\n");								//당신의 나이는 ? 출력
	scanf("%d", &age);											//입력 받기
	if (age >= 20)												//나이가 20이상일때
		printf("입장 가능합니다.\n");							//입장 가능 합니다 출력
	else                                                        //if문이 거짓 일때
		printf("입장할 수 없습니다.\n");						//입장할 수 없습니다 출력
	return 0;
}

#include <stdio.h>
int main() {
	int color;
	printf("출입증 색깔은? (1.노란색 2.파란색 3.빨간색)\n");   //출입증 색깔은? (1.노란색 2.파란색 3.빨간색)출력
	scanf("%d", &color);										// 색깔을 입력 받기
	if (color == 1)												// 색깔이 1일때
		printf("노란색-A방 \n");								// 노란색을 출력
	else if (color == 2)										// 색깔이 2일때
		printf("파란색-B방 \n");								// 파란색을 출력
	else if (color == 3)										// 색깔이 3일때
		printf("빨간색-C방 \n");								// 빨간색 출력
	return 0;
}

#include<stdio.h>
int main() {
	int cap;
	printf("다음 국가의 수도는?(1.미국 2.일본 3.중국)\n");		//다음 국가의 수도는?(1.미국 2.일본 3.중국 출력
	scanf("%d", &cap);											//변수 cap의 입력
	switch (cap) {
	case 1: printf("미국 : 워싱턴\n"); break;					//1을 입력할 경우 미국 워싱턴 출력
	case 2: printf("일본 : 도쿄\n"); break;						//2를 입력할 경우 일본 도쿄 출력
	case 3: printf("중국 : 베이징\n"); break;					//3을 입력할 경우 중국 베이징 출력
	default: printf("입력 오류입니다.\n");						//다른 수를 입력할 경우 입력 오류
	}
}