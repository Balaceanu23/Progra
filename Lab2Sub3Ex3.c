#include <stdio.h>

int power(int base, int exponent);

int main() {

	int base = 10,exponent = 4;
	printf("%d",power(base,exponent));

	return 0;
}

int power(int base, int exponent){

	if ( exponent==1 )
		return base;
	else
		return base*power( base, exponent-1 );
}
