// #include <stdio.h>
// int value = 0;
// int function(void)
// {
// 	auto int value  = 1;
// 	printf("%d ", value); //1  
// 	{
// 		int value = 2;
// 		printf("%d ", value);//2  
// 		{
// 			value += 1; // 2 => 3 
// 			printf("%d ", value);//3 
// 		}
// 		printf("%d ", value);//3 
// 	}
// 	printf("%d ", value);//1 
// 	return 0;
// }
// int main(void)
// {
//     function();
//     return 0;
// }

#include <stdio.h>
int no1 = 17, no2 = 71;
void swapping(void)
{
    // global variables are used here 
	int temp = no2;
	no2 = no1;
	no1 = temp;
    //global variables are swapped 
}
int main(void)
{
	int no1 = 17, no2 = 71;
	printf("%d %d ", no1 , no2);// 17 71 
	swapping();
	printf("%d %d\n", no1, no2);// 17 71
    // local variables are printed ( priority is given to local variables ) 
	return 0;
}

