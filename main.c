#include <stdio.h>
int ceiling(int x, int n) {
	return (x % n == 0 || x < 0)? x / n : (x+n)/n;
}
int main(void) {
	printf("20 / 4 =%d\n", ceiling(20, 4));
	printf("17 / 4 =%d\n", ceiling(17, 4));	
	printf("-17 / 4 =%d\n", ceiling(-17, 4));
	return 0;
}
