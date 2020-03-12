//#include<stdio.h>
//#include<string.h>
//
//int checking(int a, int b) {
//
//	int c = a / 100, d = (a / 10) % 10, e = a % 10;
//
//	if ((c - d) == (d - e))
//		return b + 1;
//
//	else return b;
//
//}
//
//int main() {
//
//	int n;
//	scanf_s("%d", &n);
//
//	if (n < 100) printf("%d",n);
//
//	else {
//
//		int count = 99; 
//
//		for(int i = 100; i<=n; i++)
//			if (i < 1000) {
//
//				count = checking(i, count);
//
//			}
//		printf("%d", count);
//	}
//
//}
