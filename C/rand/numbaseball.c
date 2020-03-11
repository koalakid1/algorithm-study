//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//
//int ans[10], user_ans[10], count = 0, count2 = 1, strike = 0, ball = 0;
//
//
//void start() {
//	int checker, checker2 = 0, checker3 = 0;
//	srand((unsigned)time(NULL));
//	while (1) {
//		if (count == 0) { 
//			ans[count] = (rand() % 9) + 1; 
//		}
//		else {
//			checker = (rand() % 10);
//			for (int i = 0; i < count; i++) {
//				if (ans[i] == checker) {
//					checker2 = 1;
//					break;
//				}
//			}
//			if (checker2 == 1) {
//				checker2 = 0;
//				continue;
//			}
//			ans[count] = checker;
//		}
//		count += 1;
//		printf(" \n현재 %d자리 숫자야구가 준비되었습니다. 숫자야구의 자리수를 늘리시겠습니까? (최대 10자리, 늘리지 않을거면 1 입력) \n", count);
//		scanf_s("%d", &checker3);
//		if (checker3 == 1 || count == 10) {
//			printf("\n%d자리 숫자야구가 시작되었습니다.\n", count); break;
//		}
//	}
//}
//
//
//void one_play() {
//	int checker, checker2 = 0, checker3 = 0;
//	printf("\n숫자야구 %d회차 시작! \n", count2);
//	printf("\n%d자리 숫자를 차례로 입력하세요.(맨 처음 숫자는 무조건 1~9사이의 숫자입니다.)\n", count);
//	int i = 0;
//	while (i < count) {
//		printf("\n%d번째 숫자", i + 1);
//		scanf_s("%d", &checker);
//		for (int j = 0; j < i; j++) {
//			if (user_ans[j] == checker) {
//				checker2 = 1;
//				break;
//			}
//		}
//		if (checker2 == 1) {
//
//			checker2 = 0;
//			printf("입력했던 숫자와 다른 숫자를 입력하세요!\n");
//			continue;
//		}
//		user_ans[i] = checker;
//		for (int k = 0; k < count; k++) {
//			if (user_ans[i] == ans[k]) {
//				if (i == k) {
//					strike += 1;
//					break;
//				}
//				else {
//					ball += 1;
//					break;
//				}
//			}
//		}
//		i++;
//		if (i == count) {
//			count2 += 1;
//			printf("%d 스트라이크, %d 볼입니다! \n", strike, ball);
//			strike = 0, ball = 0;
//			break;
//		}
//	}
//}
//
//void playing() {
//	int checker = 0;
//	while (1) {
//		one_play();
//		printf("\n정답을 맞추시겠습니까? (맞출거면 0 입력) \n");
//		scanf_s("%d", &checker);
//		if (checker == 0) {
//			printf("정답이라고 생각하는 %d자리 숫자를 차례로 입력하세요.(맨 처음 숫자는 무조건 1~9사이의 숫자입니다.)\n", count);
//			for (int i = 0; i < count; i++) {
//				printf("\n%d번째 숫자 \n", i + 1);
//				scanf_s("%d", &user_ans[i]);
//			}
//			if (strcmp(user_ans, ans) == 0) {
//				printf("\n정답입니다!!!!!! %d회 만에 정답을 맞추셨습니다~ \n", count2 - 1);
//				break;
//			}
//			else {
//				printf("\n땡! 틀렸습니다!! \n");
//				break;
//			}
//		}
//	}
//}
//
//
//int main() {
//	int coin = 0;
//	while (1) {
//		printf("게임 내에서 반드시 한자리 숫자만 입력하세요! \n\n");
//		start();
//		playing();
//		printf("한번 더 하시겠습니까? (하지 않을꺼면 1) \n");
//		scanf_s("%d", &coin);
//		if (coin == 1) {
//			printf("게임을 종료합니다.");
//			break;
//		}
//		count = 0, count2 = 1;
//	}
//}