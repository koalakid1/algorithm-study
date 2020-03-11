//// 다섯개의 상품 중 어떤 상품이 가장 싼 상품인지 맞추는 문제
//#include<stdio.h>
//
//int main() {
//
//	int a, b, c, d, e;
//
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	scanf_s("%d", &c);
//	scanf_s("%d", &d);
//	scanf_s("%d", &e);
//
//	if (a < b) {
//		if (a < c) {
//			if (a < d) {
//				if (a < e) printf("%d", a);
//				else printf("%d", e);
//			}
//			else {
//				if (d > e) printf("%d", d);
//				else printf("%d", e);
//			}
//		}
//		else {
//			if (c < d) {
//				if (c < e) printf("%d", c);
//				else printf("%d", e);
//			}
//			else {
//				if (d < e) printf("%d", d);
//				else printf("%d", e);
//			}
//		}
//	}
//	else {
//		if (b < c) {
//			if (b < d) {
//				if (b < e) printf("%d", b);
//				else printf("%d", e);
//			}
//			else {
//				if (d < e) printf("%d", d);
//				else printf("%d", e);
//			}
//		}
//		else {
//			if (c < d) {
//				if (c < e) printf("%d", c);
//				else printf("%d", e);
//			}
//			else {
//				if (d < e) printf("%d", d);
//				else printf("%d", e);
//			}
//		}
//	}
//
//}