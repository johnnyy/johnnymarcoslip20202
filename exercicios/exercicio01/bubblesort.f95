! Programa de Exemplo Fortran 95
!   Entrada: Uma lista de 10 valores inteiros
!   Saída: Lista Ordenada com os 10 valores
program bubblesort
    implicit none
    integer, dimension(10) :: Int_List
    integer :: Aux, Counter, i , j, Size
    Aux = 0 
    Size = 10
! Lê os dados de entrada
    do Counter = 1, Size
        read *, Int_List(Counter)    
    end do
    
    
    do i = 2, Size
    	
    	do j = 1, Size - 1
    	    if (Int_List(j) > Int_List(j+1)) then
    	    	Aux = Int_List(j)
    	    	Int_List(j) = Int_List(j+1)
    	    	Int_List(j+1) = Aux
    	    end if
    	end do
    end do
    
    do Counter = 1, Size
    	write(*,'(1x,i0)', advance='no') Int_List(Counter)
    end do
    print *, ''


    
end program bubblesort
