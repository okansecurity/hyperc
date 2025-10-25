#ifndef HYPER_CORE_H
#define HYPER_CORE_H


// Library special definitions 
#define ARRY_END -1
typedef char* string;


// standart Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void Short_AddElement(short** arry,int size,short element,int place_to_add){
	short* temp = realloc(*arry,(size+1) * sizeof(short));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void UnsignedShort_AddElement(unsigned short** arry,int size,unsigned short element,int place_to_add){
	unsigned short* temp = realloc(*arry,(size+1) * sizeof(unsigned short));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void Int_AddElement(int** arry,int size,int element,int place_to_add){
	int* temp = realloc(*arry,(size+1) * sizeof(int));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void UnsignedInt_AddElement(unsigned int** arry,int size,unsigned int element,int place_to_add){
	unsigned int* temp = realloc(*arry,(size+1) * sizeof(unsigned int));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void Long_AddElement(long** arry,int size,long element,int place_to_add){
	long* temp = realloc(*arry,(size+1) * sizeof(long));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void UnsignedLong_AddElement(unsigned long** arry,int size,unsigned long element,int place_to_add){
	unsigned long* temp = realloc(*arry,(size+1) * sizeof(unsigned long));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void LongLong_AddElement(long long** arry,int size,long long element,int place_to_add){
	long long* temp = realloc(*arry,(size+1) * sizeof(long long));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void UnsignedLongLong_AddElement(unsigned long long** arry,int size,unsigned long long element,int place_to_add){
	unsigned long long* temp = realloc(*arry,(size+1) * sizeof(unsigned long long));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void Float_AddElement(float** arry,int size,float element,int place_to_add){
	float* temp = realloc(*arry,(size+1) * sizeof(float));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void Double_AddElement(double** arry,int size,double element,int place_to_add){
	double* temp = realloc(*arry,(size+1) * sizeof(double));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}

void LongDouble_AddElement(long double** arry,int size,long double element,int place_to_add){
	long double* temp = realloc(*arry,(size+1) * sizeof(long double));
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	*arry = temp;
	if(place_to_add < 0 || place_to_add > size){
		place_to_add = size;
	}
	for(int i = size; i > place_to_add; i--){
		(*arry)[i] = (*arry)[i-1];
	}
	(*arry)[place_to_add] = element;
}


/* For delete */
void Short_DellElement(short** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	short* temp = (short*) malloc(sizeof(short)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void UnsignedShort_DellElement(unsigned short** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	unsigned short* temp = (unsigned short*) malloc(sizeof(unsigned short)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void Int_DellElement(int** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	int* temp = (int*) malloc(sizeof(int)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void UnsignedInt_DellElement(unsigned int** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	unsigned int* temp = (unsigned int*) malloc(sizeof(unsigned int)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void Long_DellElement(long** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	long* temp = (long*) malloc(sizeof(long)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void UnsignedLong_DellElement(unsigned long** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	unsigned long* temp = (unsigned long*) malloc(sizeof(unsigned long)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void LongLong_DellElement(long long** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	long long* temp = (long long*) malloc(sizeof(long long)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void UnsignedLongLong_DellElement(unsigned long long** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	unsigned long long* temp = (unsigned long long*) malloc(sizeof(unsigned long long)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void Float_DellElement(float** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	float* temp = (float*) malloc(sizeof(float)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void Double_DellElement(double** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	double* temp = (double*) malloc(sizeof(double)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}

void LongDouble_DellElement(long double** arry,int size,int element_index){
	if(element_index == ARRY_END){element_index = size;}
	if(element_index < 0 || element_index > size){
		printf("Invalid index!\n");
		return;
	}
	int NewSize = size-1;
	long double* temp = (long double*) malloc(sizeof(long double)*NewSize);
	if(!temp){
		printf("Memory could not be created!\n");
		return;
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(i==element_index) continue;
		temp[j++] = (*arry)[i];
	}
	free(*arry);
	*arry = temp;
}


#endif /* HYPER_CORE_H */ 
