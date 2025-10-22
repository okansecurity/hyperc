#ifndef HYPERC_H
#define HYPERC_H


// Library special definitions 
typedef char* string;

// standart Library
#include <stdio.h>
#include <stdlib.h>

// for string
string get_string(const char* prompt){
	
	if(prompt != NULL){
		printf("%s",prompt);
		}
		
	string str = malloc(sizeof(char));
	if(!str){
		printf("Memory could not be created!\n");
		return NULL;
		}
		
	char ch;
	int index = 0;
	
	while(1){
		ch = getchar();
		if(ch == '\n') break;
		str = (string) realloc(str, index + 2);
		str[index] = ch;
		index++;
		str[index] = '\0';
		}
	
	return str;
	
	}
	



#endif /* HYPERC_H */ 
