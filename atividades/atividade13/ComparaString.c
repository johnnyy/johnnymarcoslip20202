#include<stdio.h>
#include<string.h>

int main (int argc, char *argv[]){
	char * string_1 = argv[1];
	char * string_2 = argv[2];

	printf("%s: %lu\n", string_1, strlen(string_1));
	printf("%s: %lu\n", string_2, strlen(string_2));

	char * pch = strstr(string_1, string_2);

	if ( pch != NULL){
		printf("%s contém %s\n", string_1, string_2);
	}
	else{
		printf("%s não contém %s\n", string_1, string_2);
	}

	pch = strstr(string_2, string_1);

        if ( pch != NULL){
                printf("%s contém %s\n", string_2, string_1);
        }
        else{
                printf("%s não contém %s\n", string_2, string_1);
        }



	char caracter;
	int j = 0;
	int len = strlen(string_1) - 1;
	for (int i = len; i > len/2; i--, j++){
		caracter= string_1[j];
		string_1[j] = string_1[i];
		string_1[i] = caracter;
	}

	printf("%s\n", string_1);


        caracter;
        j = 0;
        len = strlen(string_2) - 1;
        for (int i = len; i > len/2; i--, j++){
                caracter= string_2[j];
                string_2[j] = string_2[i];
                string_2[i] = caracter;
        }

        printf("%s\n", string_2);


}
