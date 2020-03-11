//#include<stdio.h>
//
//int main() {
//
//	int a, b, c, d, e[10] = { 0, };
//
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	d = a * b * c;
//	printf("%d", d);
//	while (d % 10 != d) {
//		
//		e[d % 10] += 1;
//		d /= 10;
//	}
//	e[d % 10] += 1;
//	for (int i = 0; i < 10; i++) printf("%d \n", e[i]);
//
//}