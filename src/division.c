#include <stdio.h>
#include <stdlib.h>

int divide(int dividend, int divisor) {

	int sign = 1;

	if(dividend < 0 && divisor < 0) {
		dividend = abs(dividend);
		divisor = abs(divisor);
		sign = 1;
	}

	if (dividend < 0 || divisor < 0) {
		dividend = abs(dividend);
		divisor = abs(divisor);
		sign = -1;
	}

	int sum = divisor;
	int res = 0;

	while (sum <= dividend) {
		sum += divisor;
		res++;
	}

	res *= sign;

	return res;
}


int main(void) {

	int dividend;
	int divisor;
	scanf("%d", &dividend);
	scanf("%d", &divisor);

	printf("%d\n", dividend);
	printf("%d\n", divisor);
	
	int result = divide(dividend, divisor);

	printf("result %d\n", result);
}
