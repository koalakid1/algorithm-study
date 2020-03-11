//#include<stdio.h>
//
//int main() {
//
//	int a, b,c[1000];
//	scanf_s("%d", &a);
//	
//	double count = 0, max = 0;
//	for (int i = 0; i < a; i++) {
//		scanf_s("%d", &b);
//		c[i] = b;
//		if (b > max) max = b;
//	}
//
//	for (int j = 0; j < a; j++) {
//		count += c[j] / max * 100;
//	}
//	printf("%.2lf", count / a);
//}