#include<stdio.h>
#include <string.h>


int main() {

	int a;
	char b[80];

	scanf_s("%d", &a);

	int count, sum;
	for (int i = 0; i < a; i++) {
		count = 1, sum = 0;
		scanf_s("%s", &b,80);
		for (int j = 0; j < strlen(b); j++) {
			if (b[j] == 'O') {
				sum += count, count++;
			}
			else {
				count = 1;
			}
		}
		printf("%d\n", sum);
	}

}