#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

typedef void (*T)(int);
void Answer(int a) {
	printf("%d!\n", a);
}
void SetWait(T x, int answer) {
	for (int i = 0; i < 3; i++) {
		printf("・");
		Sleep(500);
	}

	x(answer);
}

int main() {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	int answer = rand() % 6 + 1;
	int x;
	printf("偶数なら0\n奇数なら1\n");
	scanf_s("%d", &x);
	printf("\n答えは");
	SetWait(Answer, answer);
	if (answer % 2 == x) {
		printf("正解!");
	}
	else {
		printf("不正解");
	}

	return 0;
}