#include<stdio.h> 

int main( )
{   
    //strcmp( ); 
    // char str1[20] = "Sunbeam"; //stack 
    // char str2[20] = "Sunbeam"; //stack 
    // if(str1 == str2) // comparing the addresses 
    //    printf("same"); 
    // else 
    //    printf("not same"); 

    //pointer to string 
    // char *str1 = "Info"; // Memory is allocated from RO datasection 
    // // RO => ReadOnly 
    // char *str2 = "Info";
    // if(str1 == str2)
    //    printf("Same"); 
    // else 
    //    printf("not same");  


    // char str4[10] ="ABC";//stack
    // printf("%s\n",str4); // ABC
    // str4[0] ='K';   
    // printf("%s",str4);// KBC
    
    char *str = "ABC"; // RO DATA SECTION 
    //printf("%s",str); 
    str[0] = 'K'; // *(str + 0)=>'K' 
    printf("%s",str); // runtime error (no o/p)
    return 0;   
}