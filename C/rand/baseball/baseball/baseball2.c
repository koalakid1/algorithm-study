#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int r_ans[10], user_ans[10], count = 0, count2 = 1, strike = 0, ball = 0;

int START() {
	
	char coin;
	printf("\n========================================================================================\n\n");
	printf("                                    *���� �߱� ����*\n\n");
	printf("========================================================================================\n");

	while (1) {
		printf("������ �����ϽǰŸ� o �ƴϸ� x�� �����ּ���. \n");
		coin = getche();
		if (coin != 'o' && coin != 'O' && coin != 'x' && coin != 'X') {
			printf("\n�߸��� ���ڸ� �Է��ϼ̽��ϴ� ! \n");
			continue;
		}
		break;
	}
	if (coin == 'o' || coin == 'O')
		MAKE();
	else if (coin == 'x' || coin == 'X') {
		printf("\n������ �����մϴ�.\n");
		return 0;
	}
}

int EXIT() {

	char ans;
	
	while (1) {
		printf("\n�̹� ���� ������ ���� �Ͻðھ��? (O/X)");
		ans = getche();
		if (ans != 'o' && ans != 'O' && ans != 'x' && ans != 'X') {
			printf("\n�߸��� ���ڸ� �Է��ϼ̽��ϴ� ! \n");
			continue;
		}
		break;
	}
	if (ans == 'o' || ans == 'O')
		START();

}	

int MAKE() {
	
	int checker, checker2 = 0, checker3 = 0;
	char length;
	srand((unsigned)time(NULL));
	printf(" \n���ڸ� ���ھ߱��� �����ұ��?(�ִ� 9�ڸ����� �����մϴ�~)\n���� ���� �Ǵ� 0 �Ǵ� 10 �̻��� �� �Ǵ� ���ڸ� �Է��Ͻø� �ڵ����� 4�� �����˴ϴ�.\n");
	length = getche();
	if (((int)length-'0' <= 0) || ((int)length-'0' >= 10)) length = '4';
	length = length - '0';

	while (count != length) {
		if (count == 0) {
			r_ans[count] = (rand() % 9) + 1;
		}
		else {
			checker = (rand() % 10);
			for (int i = 0; i < count; i++) {
				if (r_ans[i] == checker) {
					checker2 = 1;
					break;
				}
			}
			if (checker2 == 1) {
				checker2 = 0;
				continue;
			}
			r_ans[count] = checker;
		}
		count += 1;

	}
	printf("\n%d�ڸ� ���ھ߱��� �����Ǿ����ϴ�!\n", count);
	return SELECT();

}

int SELECT() {
	int checker2 = 0, checker3 = 0;
	char checker, next;
	int exit_ask;
	printf("\n���ھ߱� %dȸ�� ����! \n", count2);
	printf("\n%d�ڸ� ���ڸ� ���ʷ� �Է��ϼ���.(�� ó�� ���ڴ� ������ 1~9������ �����Դϴ�.)\n", count);
	int i = 0;
	while (i < count) {
		while (1) {
			printf("\n%d��° ���� : ", i + 1);
			checker = getche();
			if (i == 0) {
				if (checker - '0' <= 0 || checker - '0' > 9) {
					if (checker == 'x' || checker == 'X') {
						exit_ask = EXIT();
						if (exit_ask == 0) return 0;
					}
					printf("\n�߸� �Է��ϼ̽��ϴ�! 1~9������ ���ڸ� �Է��ϼ���!");
					continue;
				}
			}
			else {
				if (checker - '0' < 0 || checker - '0' > 9) {
					printf("\n�߸� �Է��ϼ̽��ϴ�! 0~9������ ���ڸ� �Է��ϼ���!");
					continue;
				}
			}
			break;
		}
		for (int j = 0; j < i; j++) {
			if (user_ans[j] == checker-'0') {
				checker2 = 1;
				break;
			}
		}
		if (checker2 == 1) {

			checker2 = 0;
			printf("\n�̹� ������ �Է��ߴ� �����Դϴ�. �Է��ߴ� ���ڿ� �ٸ� ���ڸ� �Է��ϼ���!\n");
			continue;
		}
		user_ans[i] = checker -'0';
		for (int k = 0; k < count; k++) {
			if (user_ans[i] == r_ans[k]) {
				if (i == k) {
					strike += 1;
					break;
				}
				else {
					ball += 1;
					break;
				}
			}
		}
		i++;
		if (i == count) {
			count2 += 1;
			printf("\n%d ��Ʈ����ũ, %d ���Դϴ�! \n", strike, ball);
			if (strike == count) {

				printf("������ ���߼̽��ϴ�!! ����ϼ̽��ϴ�!!\n �� �ɸ� ����� %d ���� �Դϴ�! \n",count2-1);
				printf("�ѹ� �� �Ͻðھ��? (o/x)\n");
				next = getche();
				if (next == 'o' || next == 'O') {
					count = 0, count2 = 1, strike = 0, ball = 0;
					return MAKE();
				}
				else return 0;

			}
			else {
				strike = 0, ball = 0;
				return SELECT();
			}
		}
	}
}


int main()
{

	START();

}