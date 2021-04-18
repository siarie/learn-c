#include <stdio.h>


int main(void) {
	int i;
	
	// Loop using while
	while (i < 10) {
		printf("%d ", i);
		i++;
	}

	printf("\n\n");
	
	int j = 10;
	// Loop using do-while
	do {
		printf("%d ", j);
		j--;
	} while(j > 0);

	printf("\n\n");


	// Loop using for
	for ( int k = 32; k <=128; k++) {
		printf("%c ", k);
	}

	printf("\n\n");

	// Loop Break
	int l = 1;
	for( ;l <= 100; l++ ) {
		if ( l > 25 && l < 75 ) {
			continue;
		}
		printf("%d ", l);
	}

	printf("\n\n");
	
	// Loop continue
	int m = 100;
	while( m < 256 ) {
		if ( m > 128) {
			break;
		}
		printf("%d ", m);
		m++;
	}

	printf("\n");
	return 0;
}
