
package com.mycompany.atividade03;
import java.lang.Enum;
import java.util.Scanner;


enum Meses_do_ano {

    Janeiro(1), Fevereiro(2), Marco(3), Abril(4) , Maio(5), Junho(6), Julho(7), Agosto(8), Setembro(9), Outubro(10), Novembro(11), Dezembro(12);
    
    public int valor;
    Meses_do_ano(int value){
        valor = value;
    }
    public int getValor(){
        return valor;
    }
}


enum Dia_semana {

    Domingo(1), Segunda(2), Terca(3), Quarta(4) , Quinta(5), Sexta(6), Sabado(7);
    
    public int valor;
    Dia_semana(int value){
        valor = value;
    }
    public int getValor(){
        return valor;
    }
}

enum Itens_compra {

    Arroz(1), Feijao(2), Macarrao(3), Farinha(4), Carne(5), Peixe(6), Chocolate(7), Ovo(8), Cuscuz(9), Batata(7);
    public int valor;
    Itens_compra(int value){
        valor = value;
    }
    public int getValor(){
        return valor;
    }
}

/**
 *
 * @author johnny
 */
public class Enum_ {
    public static void main(String[] args) {
        
        Scanner entrada = new Scanner(System.in);
        int escolha = entrada.nextInt();
        
        if( escolha == Meses_do_ano.Janeiro.getValor()){
            System.out.println("Mês Janeiro");
                
        }
        else if ( escolha == Meses_do_ano.Fevereiro.getValor()){
            System.out.println("Mês Fevereiro");
                
        }
        else if ( escolha == Meses_do_ano.Marco.getValor()){
            System.out.println("Mês Março");
                
        }
        else if ( escolha == Meses_do_ano.Abril.getValor()){
            System.out.println("Mês Abril");
                
        }
        else if ( escolha == Meses_do_ano.Maio.getValor()){
            System.out.println("Mês Maio");
                
        }         
        else if ( escolha == Meses_do_ano.Junho.getValor()){
            System.out.println("Mês Junho");
                
        }       
        else if ( escolha == Meses_do_ano.Julho.getValor()){
            System.out.println("Mês Julho");
                
        }
        else if ( escolha == Meses_do_ano.Agosto.getValor()){
            System.out.println("Mês Agosto");
                
        }        
        else if ( escolha == Meses_do_ano.Setembro.getValor()){
            System.out.println("Mês Setembro");
                
        }
        else if ( escolha == Meses_do_ano.Outubro.getValor()){
            System.out.println("Mês Outubro");
                
        }
        else if ( escolha == Meses_do_ano.Novembro.getValor()){
            System.out.println("Mês Novembro");
                
        }
        else if ( escolha == Meses_do_ano.Dezembro.getValor()){
            System.out.println("Mês Dezembro");
                
        }
        else{
            System.out.println("Mês INVALIDO!!!");
        }
        
        
        
        
        if( escolha == Dia_semana.Domingo.getValor()){
            System.out.println("Dia Domingo");
                
        }
        else if ( escolha == Dia_semana.Segunda.getValor()){
            System.out.println("Dia Segunda");
                
        }
        else if ( escolha == Dia_semana.Terca.getValor()){
            System.out.println("Dia Terça");
                
        }
        else if ( escolha == Dia_semana.Quarta.getValor()){
            System.out.println("Dia Quarta");
                
        }
        else if ( escolha == Dia_semana.Quinta.getValor()){
            System.out.println("Dia Quinta");
                
        }         
        else if ( escolha == Dia_semana.Sexta.getValor()){
            System.out.println("Dia Sexta");
                
        }       
        else if ( escolha == Dia_semana.Sabado.getValor()){
            System.out.println("Dia Sabado");
                
        }
      
        else{
            System.out.println("Dia INVALIDO!!!");
        }
        
        
                
        if( escolha == Itens_compra.Arroz.getValor()){
            System.out.println("Lista Arroz");
                
        }
        else if ( escolha == Itens_compra.Feijao.getValor()){
            System.out.println("Lista Feijão");
                
        }
        else if ( escolha == Itens_compra.Macarrao.getValor()){
            System.out.println("Lista Macarrão");
                
        }
        else if ( escolha == Itens_compra.Farinha.getValor()){
            System.out.println("Lista Farinha");
                
        }
        else if ( escolha == Itens_compra.Carne.getValor()){
            System.out.println("Lista Carne");
                
        }         
        else if ( escolha == Itens_compra.Peixe.getValor()){
            System.out.println("Lista Peixe");
                
        }       
        else if ( escolha == Itens_compra.Chocolate.getValor()){
            System.out.println("Lista Chocolate");
                
        }
        else if ( escolha == Itens_compra.Ovo.getValor()){
            System.out.println("Lista Ovo");
                
        }
        else if ( escolha == Itens_compra.Cuscuz.getValor()){
            System.out.println("Lista Cuscuz");
                
        }
        else if ( escolha == Itens_compra.Batata.getValor()){
            System.out.println("Lista Batata");
                
        }
            
        else{
            System.out.println("Lista INVALIDO!!!");
        }
        
        
    }
}





