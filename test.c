#include "hyper_core.h"

int main(void){
	
	string name = get_string("Enter name:");
	printf("you name: %s \n",name);
	
	printf("\n");
	
	int* arry = (int *) malloc(sizeof(int)*5);
	
	for(int i = 0; i < 5; i++){
		arry[i] = i;
		}
	
	printf("before addelement\n");
	for(int i = 0; i < 5; i++){
		printf("%d-",arry[i]);
		}
	
	for(int i = 5; i < 10; i++){
		Int_AddElement(&arry,i,i+1);
		}
	
	printf("\nafeter addelement\n");
	for(int i = 0; i < 10; i++){
		printf("%d-",arry[i]);
		}
	
	printf("\n");

	}
	
	
