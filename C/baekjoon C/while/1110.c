//#include<stdio.h>
//
//int main() {
//
//	int a;
//	scanf_s("%d", &a);
//
//	int b = a / 10, c = a % 10, d = 0, count = 0;
//	while (d != a) {
//		d = (b + c) % 10 + c * 10;
//		b = d / 10;
//		c = d % 10;
//		count += 1;
//	}
//	printf("%d", count);
//}