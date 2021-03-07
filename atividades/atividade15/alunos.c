#include <stdio.h>
#include <string.h>
//definição da enum
enum Disciplina {LIP = 0, Compiladores, Paralela} Disciplina;

enum Curso {CC = 0, ES, EC, RC, DD} Curso;

enum Consolidado {NAO = 0, SIM} Consolidado;

typedef union Avaliacao {
	float media;
	float notas[3];
} Avaliacao;




typedef struct Estudante{
	char nome[40];
	int curso;
	int disciplina;
	int consolidado;
	Avaliacao avaliacao;
} Estudante;

int comparaEstudante(Estudante Estudante1, Estudante Estudante2){

//Pelo exemplo, não é avaliado o atributo "consolidado"
// e pela falta de verificação do tipo da avaliação, tmb não é avaliado se a média é igual
//Portanto, a verificação é com relação ao nome, curso e disciplina.
	if (
		!strcmp(Estudante1.nome, Estudante2.nome)
		&& Estudante1.disciplina == Estudante2.disciplina
		&& Estudante1.curso == Estudante2.curso
		){
		return 1;
	}
	else return 0;
}

int main(){
	Estudante a = { .nome = "João Marcelo", 
		        .disciplina = Paralela, 
		        .curso = CC , 
		        .avaliacao.media = 7.0 , 
		        .consolidado = SIM };
	Estudante b = { .nome = "João Marcelo", 
		        .disciplina = Paralela, 
		        .curso = CC , 
		        .avaliacao.notas = {7.0, 8.0, 6.0} , 
		        .consolidado = NAO };	
		                
	printf("%s %d %d %.2f %d\n", a.nome, 
		                     a.disciplina, 
		                     a.curso, 
		                     a.avaliacao.media, 
		                     a.consolidado);
	printf("%s %d %d %.2f %d\n", b.nome, 
		                     b.disciplina, 
		                     b.curso, 
		                     (b.avaliacao.notas[0] + 
		                     b.avaliacao.notas[1] + 
		                     b.avaliacao.notas[2])/3.0, 
		                     b.consolidado) ;
	if (comparaEstudante(a, b)) {
	    printf("a e b iguais.\n");
	} else {
	    printf("a e b diferentes.\n");
	}
		
	Estudante c = { .nome = "Maria do Carmo", 
		        .disciplina = Compiladores, 
		        .curso = ES , 
		        .avaliacao.media = 8.0 , 
		        .consolidado = SIM };
	Estudante d = { .nome = "Francisco de Assis", 
		        .disciplina = LIP, 
		        .curso = EC , 
		        .avaliacao.notas = {2.0, 2.0, 6.0} , 
		        .consolidado = NAO };	
		                
	printf("%s %d %d %.2f %d\n", c.nome, 
		                     c.disciplina, 
		                     c.curso, 
		                     c.avaliacao.media, 
		                     c.consolidado);
	printf("%s %d %d %.2f %d\n", d.nome, 
		                     d.disciplina, 
		                     d.curso, 
		                     (d.avaliacao.notas[0] + 
		                     d.avaliacao.notas[1] + 
		                     d.avaliacao.notas[2])/3.0, 
		                     d.consolidado) ;
		                
	if (comparaEstudante(c, d)) {
	    printf("c e d iguais.\n");
	} else {
	    printf("c e d diferentes.\n");
	}
      
	return 0;
}
