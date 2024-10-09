#include <stdio.h>

int Recursive(int hours) {

	if (hours <= 1) {
		return 100;
	}
	
	return (hours * Recursive(hours * 2 - 50));
	
};


int main() {

	int hours = 3;
	int result;

	result = Recursive(hours);

	printf("%d = %d", hours, result);

	return 0;
}