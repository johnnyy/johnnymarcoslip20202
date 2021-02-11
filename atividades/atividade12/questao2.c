#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void func_estatico(){

	static int vetor[10000];
}


void func_pilha(){
	int vetor2[10000];
}

void func_monte(){
	int *v = malloc(10000 * sizeof(int));
}


int main(){
	clock_t begin = clock();
 	
	for ( int i = 0; i < 100000; i++){
		func_estatico();

	}
 
	clock_t end = clock();
 
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
 	printf("Tempo gasto chamada estática em segundos com 5 casas decimais: %.5f\n", time_spent);



        begin = clock();
        
        for ( int i = 0; i < 100000; i++){
                func_pilha();

        }
 
        end = clock();
 
        time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
        printf("Tempo gasto chamada pilha em segundos com 5 casas decimais: %.5f\n", time_spent);


        begin = clock();

        for ( int i = 0; i < 100000; i++){
                func_monte();

        }
 
        end = clock();
 
        time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
        printf("Tempo gasto chamada monte em segundos com 5 casas decimais: %.5f\n", time_spent);
        
        
 }
