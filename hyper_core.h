#ifndef HYPER_CORE_H
#define HYPER_CORE_H


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

/* add for element Int_AddElement(&arry, size, new_element) */
void Int_AddElement(int** arry,int size, int element){
	int* temp = realloc(*arry,(size+1) * sizeof(int));
	*arry = temp;
	(*arry)[size] = element;
	}
	
void Float_AddElement(float** arry,int size, float element){
	float* temp = realloc(*arry,(size+1) * sizeof(float));
	*arry = temp;
	(*arry)[size] = element;
	}

void Double_AddElement(double** arry,int size, double element){
	double* temp = realloc(*arry,(size+1) * sizeof(double));
	*arry = temp;
	(*arry)[size] = element;
	}
	



#endif /* HYPER_CORE_H */ 
