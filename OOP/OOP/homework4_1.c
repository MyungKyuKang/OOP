#include<stdio.h>
#pragma warning(disable: 4996)

int main_homework4_1() {
	char s[100];
	printf("문자를 입력하세요(100자 이내).");
	scanf("%s", s);
	printf("입력된 문자는 %s입니다.\n", s);

	system("pause");
	return 0;
}