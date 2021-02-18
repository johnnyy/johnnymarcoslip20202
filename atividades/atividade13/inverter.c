#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("Digite uma frase:");
	scanf("%s",str);
	char caracter;
	int j = 0;
	int len = strlen(str) - 1;
	for (int i = len; i >= len/2; i--, j++){
		caracter= str[j];
		str[j] = str[i];
		str[i] = caracter;
	}

	printf("%s\n",str);
	return 0;
}
