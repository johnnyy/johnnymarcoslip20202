#include<stdio.h>
#include<stdlib.h>

int is_negative(int value){
	int signal;
	if (value < 0){
		signal = 1;
	}
	else {
		signal = 0;
	}
	return signal;
}

int main(int argc, char *argv[]){
	int v = atoi(argv[1]);
	int status = is_negative(v);
	int status_novo;
	int multiplo = v, maior_multiplo, fator=1;
	do{

		maior_multiplo = multiplo;
		multiplo = fator * v;
		status_novo = is_negative(multiplo);
		fator++;


	}
	while(status_novo == status);


	printf("Maior Multiplo: %d\n",maior_multiplo);
}
