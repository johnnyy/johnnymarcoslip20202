// Correção: 1,5
#include<stdio.h>

int strlen_local(char * str){
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++){
		count++;
	}
	return count;
}

int strcmp_local(char * str1, char * str2){
	int is_equals = 0;

	if(strlen_local(str1) != strlen_local(str2)){
		is_equals = 1;
		return is_equals;
	}

	for (int i = 0; str1[i] != '\0'; i++){
		if(str1[i] != str2[i]){
			is_equals = 1;
			break;
		}

	}
	return is_equals;

}

// Você não alocou memória no monte para garantir 
// o espaço das duas cadeias. 
void strcat_local(char * str1, char * str2){
	int len_1 = strlen_local(str1);
	for (int i = 0; str2[i] != '\0'; i++, len_1++){
		str1[len_1] = str2[i];
	}
	str1[len_1] = '\0';
}

int main(int argc, char* argv[]){

	char* string1 = argv[1];
	char * string2 = argv[2];

	printf("Tamanho string1: %d\n", strlen_local(string1));
	printf("Tamanho string2: %d\n", strlen_local(string2));

	if(!strcmp_local(string1, string2))
		printf("As duas string são iguais\n");

	else
		printf("As duas string são diferentes\n");


	strcat_local(string1, string2);
	printf("União das duas string: %s\n", string1);

	return 0;
}


//Questão 2.

//1.
//	-C++ suporta conversão implícita de float para inteiro ou char, Java faz conversão explícita.
//	-C++ suporta conversão implícita de char para inteiro, Java faz conversão explícita.
//

//2.
//	-Não encontrei nenhuma conversão implícita que funciona no Java e não funciona em C#.
