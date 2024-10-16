#include <stdio.h>

int Recursive(int recursiveWage,int hours,int recursiveTotal,int total,int wage
) {

	total = wage * hours;

	recursiveTotal += recursiveWage;

	if (total < recursiveTotal) {

		printf("再帰の給料と時間　給料=%d,時給=%d,時間=%d\n", recursiveTotal, recursiveWage, hours);

		printf("一般の給料と時間　給料=%d,時給=%d,時間=%d\n", total, wage, hours);

		return 0;

	}
	else {

		printf("再帰の給料と時間　給料=%d,時給=%d,時間=%d\n", recursiveTotal, recursiveWage, hours);

		printf("一般の給料と時間　給料=%d,時給=%d,時間=%d\n", total, wage, hours);

		printf("\n");

		return Recursive(recursiveWage * 2 - 50, hours + 1, recursiveTotal, total, wage);

	}

};


int main() {

	int hours_ = 1;
	int wage_ = 1072;
	int recursiveWage_ = 100;
	int total_ = 0;
	int recursiveTotal_ = 0;

	Recursive(recursiveWage_, hours_, recursiveTotal_, total_,wage_);

	return 0;
}