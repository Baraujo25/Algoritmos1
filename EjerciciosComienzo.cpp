#include "EjerciciosComienzo.h"

int suma(int a, int b) {
 	// IMPLEMENTAR SOLUCION
    return a+b;
}

void tablaDel(unsigned int tablaDel, unsigned int desde, unsigned int hasta) {	
	//Salida: 0*2=0;1*2=2;2*2=4;3*2=6;4*2=8
	for(int i = desde; i <= hasta; i++) {
		int producto = i * tablaDel;
		cout << i << '*' << tablaDel << '=' << producto << ((i != hasta) ? ";" : ""); 
	}
	
}

void simplificar(int n, int d) {
	int wasReduced = 0;
	while (!wasReduced) {
		for (int i = 2; i <= 9; i++ ) {
			if ((n%i == 0) && (d%i == 0)) {
				n = n / i;
				d = d / i;
				wasReduced = 1;
			}
		}
		if (wasReduced) {
			wasReduced = 0;
		} else {
			int aux = n;
			n = n < 0 ? (d < 0 ? -n : n) : (d < 0 ? -n : n); 
			d = d < 0 ? -d : d;
			cout << n << "/" << d;
			return;
		} 
	}
}

int ocurrencias123Repetidos(int* vector, int largo) {
	// IMPLEMENTAR SOLUCION
	return 0;
}


int maximoNumero(unsigned int n) {
	// IMPLEMENTAR SOLUCION
    return 0;
}

void ordenarVecInt(int *vec, int largoVec) {
	// IMPLEMENTAR SOLUCION
}


char* invertirCase(char* palabra)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

int islas(char** mapa, int col, int fil){
	// IMPLEMENTAR SOLUCION
    return 0;
}

unsigned int ocurrenciasSubstring(char **vecStr, int largoVecStr, char *substr)
{
	// IMPLEMENTAR SOLUCION
    return 0;
}

char **ordenarVecStrings(char **vecStr, int largoVecStr)
{
	// IMPLEMENTAR SOLUCION
    return NULL;
}

int* intercalarVector(int* v1, int* v2, int l1, int l2){
	// IMPLEMENTAR SOLUCION
	return NULL;
}

bool subconjuntoVector(int* v1, int* v2, int l1, int l2)
{
	// IMPLEMENTAR SOLUCION
	return false;
}

char** splitStr(char* str, char separador, int &largoRet)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void ordenarVecIntMergeSort(int* vector, int largo) 
{
	// IMPLEMENTAR SOLUCION
}
