! Programa de Exemplo Fortran 95
!   Entrada: Uma lista de 10 valores inteiros
!   Saída: O maior e menor valor da lista de valores inteiros
program maiormenor
    implicit none
    integer, dimension(10) :: Int_List
    integer :: Counter, Sum, Min, Max
    Min = 0
    Max = 0 
! Lê os dados de entrada e pega o menor e maior valor
    do Counter = 1, 10
        read *, Int_List(Counter)
        
        if (Counter == 1) then
            Min = Int_List(Counter)
            Max = Int_List(Counter)

        else
            if (Int_List(Counter) > Max) then
                Max = Int_List(Counter)
            end if
            
            if (Int_List(Counter) < Min) then
            	Min = Int_List(Counter)
            end if
            
        end if

    end do
    
    print *, 'Valor Mínimo:' , Min
    print *, 'Valor Máximo:', Max
    
end program maiormenor
