// #include <stdio.h>
// #include <stdlib.h>
// union test
// {
// 	int a;
// 	float b;
// 	double c;
// };

// int main(void)
// {
// 	union test t1;

// 	printf("%d",sizeof(t1));//8 bytes 
// 	return 0;
// }



// #include<stdio.h>
// union testUnion
// {
// short int num; 
// char ch[2];   
// };//2 bytes 

//        ch[2] 
//        
// 00001000  00000100
//      2 byte
//         num 
// int main()
// {
// union testUnion ut;
// ut.ch[0]=4; 
// ut.ch[1]=8; 
// printf("%d", ut.num); 
// return 0;
// }
// // /*
// // 	4-->  00000100
// // 	8-->  00001000

// //  00001000 00000100 // 2052 
// // */


#include<stdio.h> 
#pragma pack(1)
struct
{
	short s[5]; // 5 * 2 = 10 
	union
	{
		char x;
		float y;
		long z;
		short int z1;
	}u;// 4 bytes 
}t;
int main(void) {
    
	printf("\n Size of Structure =%u",sizeof(t)); // 14
	printf("\n Size of Union =%u",sizeof(t.u)); // 4 
	printf("\n Size of Structure + union=%d",sizeof(t)+sizeof(t.u));
    //                                          14    +   4 --> 18          
	return 0;
}

