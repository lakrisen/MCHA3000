#include "stdio.h"
#include "stdlib.h"
#include <string.h>

typedef char alt_8;
typedef unsigned char alt_u8;
char string_parser(char* inp, char* array_of_words[]);

void main(void){

	int i = 0; 
	alt_8 course[] = "ELEC3730, Embedded Systems";
	alt_8* word_array[50];
	alt_u8 no_words = string_parser(course,word_array);
	
	for(i=0; i<no_words; ++i){
	
		printf("%s\n", word_array[i]);

	}
	
	scanf("%d"); 

}


char string_parser(char* inp, char* array_of_words[]){

	int count =0;
	int i =0;
	int k =0;
	char *token; 
	char delim[] = " ";
	token = strtok(inp, delim);
	array_of_words[i] = token;
	//printf( "%s\"\n", array_of_words[i] );
	
	
	while( token != NULL ) {
		
		//printf( "result is \"%s\"\n", token );
		token = strtok( NULL, delim );
		array_of_words[i+1] = token;
		//printf( "%s\"\n", array_of_words[i] );
		count++;
		
		
		i++;
	
	}

	printf( "count is %d\n", count);




	return count; 
}
