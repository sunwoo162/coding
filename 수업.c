/*#include <stdio.h>

int main(void) {
	int k = 70, e = 80, m = 90;
	int a = k + e + m;
	printf("���� %d��, ����%d��, ����%d��\n", k, e, m);
	printf("���� %d��", a);
}

#include <stdio.h>

int main(void) {
	char ch;
	printf("���� �Է�:");
	scanf_s("%c", &ch);
	printf(" %c�� ������ �ƽ�Ű �ڵ� ���� 116�̴�.",ch);

	return 0;
}
#include <stdio.h>
int main(void) {
	int a = 0, b = 0, c = 0;
	a = ++c;
	printf("a:%d,c:%d\n", a, c);
	b = c++;
	printf("b:%d,c:%d\n",b,c);
	return 0;
}
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
#include <stdio.h>
int main(void) {
	int a = 2, b = 3, c = 3;
	if (a < b)
		printf("b�� a���� ũ��.\n");
	if (b == c)
		printf("b�� c�� ����.\n");
	if (a != c)
		printf("a�� c�� �ٸ���.\n");
}
#include <stdio.h>
int main(void) {
	int a = 2, b = 3, max;
	if (a > b);
	printf("max = %d\n", max);
	return 0;
}*/
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