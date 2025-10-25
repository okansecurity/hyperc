#include "hyper_core.h"


int main(void){
	
	/* For get string */
	/*
	string name = get_string("Plaese enther name:");
	printf("You name:%s",name);
	
	printf("\n");
	*/
	
	// add element for array  
	/*
	int size = 5;
	int* arry = malloc(sizeof(int)*size);
	
	for(int i = 0; i < size; i++){
		arry[i] = i+1;
		}
		
	printf("Before add funcs\n");
	for(int i = 0; i < size; i++){
		printf("%d-",arry[i]);
		}
		
	
	Int_AddElement(&arry,size,10,ARRY_END);
	
	printf("\n");
	printf("after add funcs\n");
	for(int i = 0; i < size+1; i++){
		printf("%d-",arry[i]);
		}
	*/
	
		
	/* to add more elements: example size 5 -> 50 */
	
	/*
    int size = 5;
	int* arry = malloc(sizeof(int)*size);
	
	for(int i = 0; i < size; i++){
		arry[i] = i+1;
		}
	
	printf("Before add funcs\n");
	for(int i = 0; i < size; i++){
		printf("%d-",arry[i]);
		}
	
	for(int i = size; i < 50;i++){
		Int_AddElement(&arry,size,i,ARRY_END);
		size++;
		}
	
	printf("\n");
	printf("after add funcs\n");
	for(int i = 0; i < 50; i++){
		printf("%d-",arry[i]);
		}
	*/
	
	/*
	int size = 5;
	int* arry = malloc(sizeof(int)*size);
	
	for(int i = 0; i < size; i++){
		arry[i] = i+1;
		}
		
	printf("Before add funcs\n");
	for(int i = 0; i < size; i++){
		printf("%d-",arry[i]);
		}
	
	// deletes the last element 
	Int_DellElement(&arry,size,ARRY_END);
	
	printf("\n");
	printf("after add funcs\n");
	for(int i = 0; i < 4; i++){
		printf("%d-",arry[i]);
		}
	
	*/
	
	/*
	int size = 5;
	int* arry = malloc(sizeof(int)*size);
	
	for(int i = 0; i < size; i++){
		arry[i] = i+1;
		}
		
	printf("Before add funcs\n");
	for(int i = 0; i < size; i++){
		printf("%d-",arry[i]);
		}
	
	// The specified element of the array is deleted.
	Int_DellElement(&arry,size,3);
	
	printf("\n");
	printf("after add funcs\n");
	for(int i = 0; i < 4; i++){
		printf("%d-",arry[i]);
		}
	
	*/
	
	return 0;

	}
