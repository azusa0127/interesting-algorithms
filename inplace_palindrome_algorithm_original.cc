#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num){
	while (num > 0){
		if (num >= 1000000000){
			if ((num % 10) != (num / 1000000000))
				return 0;
			num = num % 1000000000;
		} else if(num >= 100000000){
			if ((num % 10) != (num / 100000000))
				return 0;
			num = num % 100000000;
		} else if(num >= 10000000) {
			if ((num % 10) != (num / 10000000))
				return 0;
			num = num % 10000000;
		} else if(num >= 1000000) {
			if ((num % 10) != (num / 1000000))
				return 0;
			num = num % 1000000;
		} else if(num >= 100000) {
			if ((num % 10) != (num / 100000))
				return 0;
			num = num % 100000;
		} else if(num >= 10000) {
			if ((num % 10) != (num / 10000))
				return 0;
			num = num % 10000;
		} else if(num >= 1000) {
			if ((num % 10) != (num / 1000))
				return 0;
			num = num % 1000;
		} else if(num >= 100) {
			if ((num % 10) != (num / 100))
				return 0;
			num = num % 100;
		} else if(num >= 10) {
			if ((num % 10) != (num / 10))
				return 0;
			num = num % 10;
		}
		num /= 10;
	}
	return 1;
}
int main( int argc, char *argv[] ) {
	int num = atoi(argv[1]);
	printf("The decimal number %d is ... ", num);
	if (!isPalindrome(num))
		printf(" NOT ");
	printf("a palingdrome!\n");
	return 0;
}