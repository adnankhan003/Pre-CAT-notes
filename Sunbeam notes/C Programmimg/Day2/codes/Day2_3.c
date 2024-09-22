#include<stdio.h> 
/*
        A - Z => 65 to 90 
        a - z => 97 to 122
        0 - 9 => 48 to 57 
*/

int main( )
{
    char ch = 'A'; // 65 ( binary of 65 in 1 byte )
    char ch2 = 65; // OK 

    //printf("%c %d",ch,ch); // A 65  
    //printf("%c",ch2);//A  
    
    // \n  , \r , \t  , \b => character constant ( ASCII value)
     
    //printf("%d ",'\n');// 10 
    //printf("%d ",'\r');// 13   
    
    //printf("%d",'\r' - '\n'); //13 - 10 => 3 
    
    //char c1 = 'z'; //122 
    //printf("%d %c %o",c1-57,c1-'9',c1-32);
    //             122-57,122-57,122 - 32 
    
    //char ch3=127; // default => signed 
    /*
            char => 1 byte 
            1 byte => 8 bits 
            ( 2 to the power 8 - 1) - 1 
            ( 2 to the power 7) - 1
              127 => max range 
              -128 => min range  

    */ 
    //printf("%d",ch3); 

    //unsigned char ch4=255; 
    /*
            char => 1 byte 
            1 byte => 8 bits 
            ( 2 to the power 8) - 1 
                256 - 1
                255 => max range 
                0  
              
              

    */ 
    //printf("%d",ch4); 

    char ch5 = 128; // 127 to -128 
    printf("%d",ch5); // -128 
    return 0; 
}

//-128 -127 -126 -125 ...... 0  1  2  3 4 ......127 

//128 => -128 
//129 => -127 
//130 => -126 
//131 => -125 
//132 => -124 