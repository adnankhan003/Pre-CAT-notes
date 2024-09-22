#include <stdio.h>

int main() {
	int i, j;
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
			if(j == 2)
				break;
			printf("%d, %d\n", i, j);	
		}
	
	}
	return 0;
}
// i=1
//		j=1		-->		1, 1
// i=2
//		j=1		--> 	2, 1
// i=3
//		j=1		--> 	3, 1
// i=4		