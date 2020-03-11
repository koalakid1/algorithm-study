//#include<stdio.h>
//
//int main() {
//
//	int n,m;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		
//		scanf_s("%d", &m);
//		int sum = 0;
//		int temp[1000];
//
//		for (int j = 0; j < m; j++) {
//			scanf_s("%d", &temp[j]);
//			sum += temp[j];
//
//		}
//
//		double avg = (double)sum / m;
//		int count = 0;
//		for (int k = 0; k < m; k++) {
//
//			if (temp[k] > avg) count += 1;
//
//		}
//
//		printf("%.3f%% \n", (double)count / m * 100);
//	}
//
//}