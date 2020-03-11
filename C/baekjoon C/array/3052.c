//#include<stdio.h>
//
//int main() {
//
//	int a, b[42] = { 0, };
//
//	for (int i = 0; i < 10; i++) {
//		scanf_s("%d", &a);
//		b[a % 42] += 1;
//	}
//	int count = 0;
//	for (int i = 0; i < 42; i++) {
//		if (b[i] != 0) count += 1;
//	}
//
//	printf("%d", count);
//}