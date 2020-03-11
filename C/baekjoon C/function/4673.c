//#include<stdio.h>
//#include<string.h>
//
//int selfnum(int a) {
//
//	int b=0, result = a;
//	while (1) {
//
//		b = a % 10;
//		result += b;
//		if (b == a) return result;
//		a /= 10;
//
//	}
//
//}
//
//int main() {
//
//	int count[10000] = { 0, };
//	int self;
//
//	for (int i = 0; i < 10000; i++) {
//
//		self = selfnum(i + 1);
//		
//		if (self <= 10000) count[self-1] = 1;
//
//	}
//
//	for (int j = 0; j < 10000; j++) {
//
//		if (count[j] == 0) printf("%d \n", j + 1);
//
//	}
//
//}