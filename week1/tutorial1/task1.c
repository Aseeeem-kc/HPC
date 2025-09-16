#include <stdio.h>

void printodd(int n) {
    printf("%d\n", n);
}

void printeven(int n) {
	printf("%d\n", n);
}
	
int main() {
	int m = 1;
	int lim = 10;
	for (m = 1; m <= lim; m++) {
		if (m % 2 == 0) {
			printeven(m);
		} else {
			printodd(m);
		}
	}
	return 0;
}
