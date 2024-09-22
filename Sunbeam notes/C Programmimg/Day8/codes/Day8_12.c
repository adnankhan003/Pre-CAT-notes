#include<stdio.h> 
#include<stdlib.h> 

int main() 
{
    FILE *fptr; 
    char ch; 

    fptr = fopen("sunbeam.txt","r");  

    if(fptr==NULL)
    {
        printf("Unable to read"); 
        exit(1); 
    }

    printf("\n %ld pos",ftell(fptr)); 

    while( (  ch = fgetc(fptr) )!=EOF)
    {
            printf("\n %c %ld",ch,ftell(fptr)); 
    }
    printf("\n %ld pos",ftell(fptr)); 

    // // //  //reposition file pointer 10 offset position ahead from beginning of file
	fseek(fptr,10,SEEK_SET);	//fseek(fptr,10,0);
	ch = fgetc(fptr);	//reads a byte info at a time from file associated with fileptr
	printf("\n read char = %c Current Position %ld",ch, ftell(fptr));

	// // // // // // //reposition file pointer 5 offset position back from current position of file
	fseek(fptr,-5,SEEK_CUR);	//fseek(fptr,-5,1);
	ch = fgetc(fptr);	//reads a byte info at a time from file associated with fileptr
	printf("\n read char = %c Current Position %ld",ch, ftell(fptr));


	// // // // // // //reposition file pointer 5 offset position back from end of file position of file
	fseek(fptr,-5,SEEK_END);	//fseek(fptr,-5,2);
	ch = fgetc(fptr);	//reads a byte info at a time from file associated with fileptr
	printf("\n read char = %c Current Position %ld",ch, ftell(fptr));

	  rewind(fptr);
	// // // // // // //fseek(fptr,0,SEEK_SET);
	 printf("\n Current Position %ld",ftell(fptr));

	

	fclose(fptr);
     



}