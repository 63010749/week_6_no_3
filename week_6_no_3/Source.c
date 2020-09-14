#include<stdio.h>

int main() {
	int year;
	scanf("%d", &year);
	if (year == 0 || year > 0) {
		printf("%d", year + 543);
	}
	else {
		printf("Please insert number that is greater or equal zero.");
	}
}