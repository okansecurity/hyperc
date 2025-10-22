#include "hyper_core.h"
#include "string.h"

int main(void){
	
	string isim = get_string("isim gir:");
	printf("isminizin bellekteki tutulduğu yer %ld",strlen(isim));
	free(isim);

	}
