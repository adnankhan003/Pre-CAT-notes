#include <stdio.h>

int main() {
	int i;
	for(i=1; i<=3; i++) {
		switch(i) {
			case 1:
				printf("1");
				break; // take out of switch & then next iteration of loop
			case 2:
				printf("2");
				break; // take out of switch & then next iteration of loop
			case 3:
				printf("3");
				break; // take out of switch & then next iteration of loop
		}
		printf("\n");
	}
	// 1
	// 2
	// 3

	for(i=1; i<=3; i++) {
		switch(i) {
			case 1:
				printf("1");
				break; // take out of switch & then next iteration of loop
			case 2:
				printf("2");
				continue; // continue directly to next iteration of loop
			case 3:
				printf("3");
				break; // take out of switch & then next iteration of loop
		}
		printf("\n");
	}
	// 1
	// 23
	// 

	/*
	i=2;
	switch(i) {
		case 1:
			printf("1");
			break;
		case 2:
			printf("2");
			continue; // error: cannot have continue in switch
		case 3:
			printf("3");
			break; 
	}
	printf("\n");
	*/
	return 0;
}