#include<iostream>
#include<stdlib.h>

typedef struct indice_v {
	int index_i;
	int index_j;
}indice;


using namespace std;

template<typename Type>
indice busca_matriz( Type** matriz, Type escalar){

    indice indi;
    indi.index_i = -1;
    indi.index_j = -1;

    for(int i = 1; i < 100; i++){
        for(int j = 1; j < 100; j++){
            if (matriz[i][j] == escalar){
                indi.index_i = i;
                indi.index_j = j;
                return indi;
            }

        }
    }

    return indi;

}

int main(){

    int size = 100;
    int **matriz_int = (int **) malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++)
	    matriz_int[i] = (int *)  malloc(size * sizeof(int));

    float **matriz_float = (float **) malloc(size * sizeof(float *));
    for (int i = 0; i < size; i++)
	    matriz_float[i] = (float *) malloc(size * sizeof(float));

    
    for (int i = 1; i < size; i++) {
	    for (int j = 1; j < size; j++) {
        	matriz_int[i][j] = i*j;
	        matriz_float[i][j] = i*j;
	    }
    }

   int escalar_int = 16;
   int escalar_int_not_found = -1;

   float escalar_float = 16.0;
   float escalar_float_not_found = -1.0;

   indice indi_int = busca_matriz(matriz_int, escalar_int);
   cout << "indice da matriz inteira (" << indi_int.index_i << ", " << indi_int.index_j << ")\n";


   indice indi_float = busca_matriz(matriz_float, escalar_float);
   cout << "indice da matriz float (" << indi_float.index_i << ", " << indi_float.index_j << ")\n";

   indice indi_int_not_found = busca_matriz(matriz_int, escalar_int_not_found);
   cout << "indice da matriz inteira (" << indi_int_not_found.index_i << ", " << indi_int_not_found.index_j << ")\n";

   indice indi_float_not_found = busca_matriz(matriz_float, escalar_float_not_found);
   cout << "indice da matriz float (" << indi_float_not_found.index_i << ", " << indi_float_not_found.index_j << ")\n";


}

