# 수업에 한 내용
```
#include <stdio.h>

int main(void) {
	int k = 70, e = 80, m = 90;
	int a = k + e + m;
	printf("국어 %d점, 영어%d점, 수학%d점\n", k, e, m);
	printf("총점 %d점", a);
}
```
```
#include <stdio.h>

int main(void) {
	char ch;
	printf("문자 입력:");
	scanf_s("%c", &ch);
	printf(" %c의 문자의 아스키 코드 값은 116이다.",ch);

	return 0;
}
```
```
#include <stdio.h>
int main(void) {
	int a = 0, b = 0, c = 0;
	a = ++c;
	printf("a:%d,c:%d\n", a, c);
	b = c++;
	printf("b:%d,c:%d\n",b,c);
	return 0;
}
```
```
#include<stdio.h>
int main(void) {
	int a = 2, b = 3, c = 6, d = 5;
	a += d;
	printf("a+d:%d\n", a);			//a=a+d
	b *= d;
	printf("b*d:%d\n", b);			//b=b*d
	c /= d;
	printf("c/d:%d\n", c);			//c=c/d
	return 0;
}
```
```
#include <stdio.h>
int main(void) {
	int a = 2, b = 3, c = 3;
	if (a < b)
		printf("b가 a보다 크다.\n");
	if (b == c)
		printf("b와 c는 같다.\n");
	if (a != c)
		printf("a와 c는 다르다.\n");
}
```
```
#include <stdio.h>
int main(void) {
	int a = 2, b = 3, max;
	if (a > b);
	printf("max = %d\n", max);
	return 0;
}
```
```
#include <stdio.h>
int main(void) {
	int a = 5, b = 2;
	int x = 0, y = 0;

	x = !(a > b); // 1 => 0

	 //    0     *    0  
	y = (a == b) && (a < b) == (a > b || a == b);
	//     0 
	printf("x=%d\n", x);
	printf("y=%d", y);
	return 0;
}
```
