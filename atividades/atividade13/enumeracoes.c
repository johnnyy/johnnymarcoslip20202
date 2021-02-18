#include <stdio.h>
//definição da enum
enum meses_do_ano {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho,
  Julho, Agosto, Setembro, Outubro, Novembro, Dezembro}meses;

enum dia_semana {Domingo = 1, Segunda, Terca, Quarta, Quinta,
	Sexta, Sabado}dia_da_semana;

enum itens_compra {Arroz=1, Feijao, Macarrao, Farinha, Carne, Peixe,
	Chocolate, Ovo, Cuscuz, Batata}itens;


int main(){

	int escolha;
	printf("Digite um numero: ");
	scanf("%d",&escolha);
	if( escolha >= Janeiro && escolha <= Dezembro){

		//switch que determina qual mes será impresso na tela
	    switch(escolha)
	    {
	    case Janeiro:
	    printf("Mês Janeiro");
	    break;
	    
	    case Fevereiro:
	    printf("Mês Fevereiro");
	    break;
	    
	    case Marco:
	    printf("Mês Março");
	    break;
	    
	    case Abril:
	    printf("Mês Abril");
	    break;
	    
	    case Maio:
	    printf("Mês Maio");
	    break;
	    
	    case Junho:
	    printf("Mês Junho");
	    break;
	    
	    case Julho:
	    printf("Mês Julho");
	    break;
	    
	    case Agosto:
	    printf("Mês Agosto");
	    break;
	    
	    case Setembro:
	    printf("Mês Setembro");
	    break;
	    
	    case Outubro:
	    printf("Mês Outubro");
	    break;
	    
	    case Novembro:
	    printf("Mês Novembro");
	    break;
	    
	    case Dezembro:
	    printf("Mês Dezembro");
	    break;
	    
	    }
	  }
	  else //senão estiver na faixa válida exibe mensagem
	  {
	    printf("Mês INVALIDO!!!");
	  }
	  
	  printf("\n");
	  
	  if( escolha >= Domingo && escolha <= Sabado){

		//switch que determina qual mes será impresso na tela
	    switch(escolha)
	    {
	    case Domingo:
	    printf("Dia Domingo");
	    break;
	    
	    case Segunda:
	    printf("Dia Segunda");
	    break;
	    
	    case Terca:
	    printf("Dia Terca");
	    break;
	    
	    case Quarta:
	    printf("Dia Quarta");
	    break;
	    
	    case Quinta:
	    printf("Dia Quinta");
	    break;
	    
	    case Sexta:
	    printf("Dia Sexta");
	    break;
	    
	    case Sabado:
	    printf("Dia Sabado");
	    break;
	    }
	  }
	  else{
	  	printf("Dia Inválido!!");
	  	
	  }
	  
	  printf("\n");
	  
	  
	  
	 
	  if( escolha >= Arroz && escolha <= Batata){

		//switch que determina qual mes será impresso na tela
	    switch(escolha)
	    {
	    case Arroz:
	    printf("Lista Arroz");
	    break;
	    
	    case Feijao:
	    printf("Lista Feijão");
	    break;
	    
	    case Macarrao:
	    printf("Lista Macarrão");
	    break;
	    
	    case Farinha:
	    printf("Lista Farinha");
	    break;
	    
	    case Carne:
	    printf("Lista Carne");
	    break;
	    
	    case Peixe:
	    printf("Lista Peixe");
	    break;
	    
	    case Chocolate:
	    printf("Lista Chocolate");
	    break;
	    
	    case Ovo:
	    printf("Lista Ovo");
	    break;
	    
	    case Cuscuz:
	    printf("Lista Cuscuz");
	    break;
	    
	    case Batata:
	    printf("Lista Batata");
	    break;
	    }
	  }
	  
	  else{
	  	printf("Lista Inválido!!");
	  
	  }
	  
	  
	  printf("\n");
	  
	  
	  
	  
	  
	  
	  
}
