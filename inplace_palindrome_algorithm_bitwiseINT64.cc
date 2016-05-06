#include <stdio.h>
#include <stdlib.h>

int isPalindrome(long long num){
	num = (( num % 10) <<32) | num;
	  if ((num & 0x00000000ffffffff) > 10)
	num = (((num & 0xffffffff00000000) >> 32)*10 + (((num & 0x00000000ffffffff) / 10) % 10) <<32) | (num & 0x00000000ffffffff);
	  if ((num & 0x00000000ffffffff) > 100)
	num = (((num & 0xffffffff00000000) >> 32)*10 + (((num & 0x00000000ffffffff) / 100) % 10) <<32) | (num & 0x00000000ffffffff);
	  if ((num & 0x00000000ffffffff) > 1000)
	num = (((num & 0xffffffff00000000) >> 32)*10 + (((num & 0x00000000ffffffff) / 1000) % 10) <<32) | (num & 0x00000000ffffffff);
	  if ((num & 0x00000000ffffffff) > 10000)
	num = (((num & 0xffffffff00000000) >> 32)*10 + (((num & 0x00000000ffffffff) / 10000) % 10) <<32) | (num & 0x00000000ffffffff);
	  if ((num & 0x00000000ffffffff) > 100000)
	num = (((num & 0xffffffff00000000) >> 32)*10 + (((num & 0x00000000ffffffff) / 100000) % 10) <<32) | (num & 0x00000000ffffffff);
	  if ((num & 0x00000000ffffffff) > 1000000)
	num = (((num & 0xffffffff00000000) >> 32)*10 + (((num & 0x00000000ffffffff) / 1000000) % 10) <<32) | (num & 0x00000000ffffffff);
	  if ((num & 0x00000000ffffffff) > 10000000)
	num = (((num & 0xffffffff00000000) >> 32)*10 + (((num & 0x00000000ffffffff) / 10000000) % 10) <<32) | (num & 0x00000000ffffffff);
	  if ((num & 0x00000000ffffffff) > 100000000)
	num = (((num & 0xffffffff00000000) >> 32)*10 + (((num & 0x00000000ffffffff) / 100000000) % 10) <<32) | (num & 0x00000000ffffffff);
	  if ((num & 0x00000000ffffffff) > 1000000000)
	num = (((num & 0xffffffff00000000) >> 32)*10 + (((num & 0x00000000ffffffff) / 1000000000) << 32)) | (num & 0x00000000ffffffff);

	if (((num & 0xffffffff00000000) >> 32) == (num & 0x00000000ffffffff))
		return 1;
	return 0;
}
int main( int argc, char *argv[] ) {
	long long num = strtoll(argv[1], NULL, 10);
	printf("The decimal number %lld is ... ", num);
	if (!isPalindrome(num))
		printf(" NOT ");
	printf("a palingdrome!\n");
	return 0;
}