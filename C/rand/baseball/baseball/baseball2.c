#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int r_ans[10], user_ans[10], count = 0, count2 = 1, strike = 0, ball = 0;

int START() {
	
	char coin;
	printf("\n========================================================================================\n\n");
	printf("                                    *숫자 야구 게임*\n\n");
	printf("========================================================================================\n");

	while (1) {
		printf("게임을 시작하실거면 o 아니면 x를 눌러주세요. \n");
		coin = getche();
		if (coin != 'o' && coin != 'O' && coin != 'x' && coin != 'X') {
			printf("\n잘못된 문자를 입력하셨습니다 ! \n");
			continue;
		}
		break;
	}
	if (coin == 'o' || coin == 'O')
		MAKE();
	else if (coin == 'x' || coin == 'X') {
		printf("\n게임을 종료합니다.\n");
		return 0;
	}
}

int EXIT() {

	char ans;
	
	while (1) {
		printf("\n이번 숫자 게임을 종료 하시겠어요? (O/X)");
		ans = getche();
		if (ans != 'o' && ans != 'O' && ans != 'x' && ans != 'X') {
			printf("\n잘못된 문자를 입력하셨습니다 ! \n");
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
	printf(" \n몇자리 숫자야구를 진행할까요?(최대 9자리까지 가능합니다~)\n만약 음수 또는 0 또는 10 이상의 수 또는 문자를 입력하시면 자동으로 4로 설정됩니다.\n");
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
	printf("\n%d자리 숫자야구가 생성되었습니다!\n", count);
	return SELECT();

}

int SELECT() {
	int checker2 = 0, checker3 = 0;
	char checker, next;
	int exit_ask;
	printf("\n숫자야구 %d회차 시작! \n", count2);
	printf("\n%d자리 숫자를 차례로 입력하세요.(맨 처음 숫자는 무조건 1~9사이의 숫자입니다.)\n", count);
	int i = 0;
	while (i < count) {
		while (1) {
			printf("\n%d번째 숫자 : ", i + 1);
			checker = getche();
			if (i == 0) {
				if (checker - '0' <= 0 || checker - '0' > 9) {
					if (checker == 'x' || checker == 'X') {
						exit_ask = EXIT();
						if (exit_ask == 0) return 0;
					}
					printf("\n잘못 입력하셨습니다! 1~9사이의 숫자를 입력하세요!");
					continue;
				}
			}
			else {
				if (checker - '0' < 0 || checker - '0' > 9) {
					printf("\n잘못 입력하셨습니다! 0~9사이의 숫자를 입력하세요!");
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
			printf("\n이미 이전에 입력했던 숫자입니다. 입력했던 숫자와 다른 숫자를 입력하세요!\n");
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
			printf("\n%d 스트라이크, %d 볼입니다! \n", strike, ball);
			if (strike == count) {

				printf("정답을 맞추셨습니다!! 고생하셨습니다!!\n 총 걸린 라운드는 %d 라운드 입니다! \n",count2-1);
				printf("한번 더 하시겠어요? (o/x)\n");
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