#include <stdio.h>

int main() {
	int i, j;
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
			if(j == 2)
				continue;

			printf("%d, %d\n", i, j);
		}
	
	}
	return 0;
}

// i=1
//		j=1		-->		1, 1
//		j=2		--> 	continue
//		j=3		-->		1, 3
// i=2
//		j=1		-->		2, 1
//		j=2		--> 	continue
//		j=3		-->		2, 3
// i=3
//		j=1		-->		3, 1
//		j=2		--> 	continue
//		j=3		-->		3, 3
// i=4
