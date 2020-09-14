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
	int sequence = 0;
	int occurrences = 0;

	for (int i = 0; i < largo; i++) {

		if (sequence + 1 == vector[i] ) {
			sequence++;
		} else if (sequence > vector[i]) { 
			sequence = 0;
		} 
		if (sequence == 3) {
			occurrences++;
			sequence = 0;
		} 

	}
	return occurrences;
}


int maximoNumero(unsigned int n) {
	int* numbers = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	
	int max = INT_MIN;
	for (int i = 0; i < n; i++ ) {
		max = (max < numbers[i]) ? numbers[i] : max;
	}

	return max;
}

void ordenarVecInt(int *vec, int largoVec) {
	if (largoVec == 0) {
		return;
	}
	int* ordered = new int[largoVec];
	int hasChanges = 0;
	do {
		hasChanges = 0;
		for(int i = 0; i < largoVec; i++) {
			if (i+1 != largoVec) { 
		
				if (vec[i] > vec[i+1]) {
					int aux = vec[i+1];
					vec[i+1] = vec[i];
					vec[i] = aux;
					hasChanges = 1;		
				}
			} else {
				if (vec[i] < vec[0] ) {
					int aux = vec[i];
					vec[i] = vec[0];
					vec[0] = aux;
					hasChanges = 1;
				}
				
			}

		}

	} while (hasChanges);
	
}

/*
Will convert the case of the given char in upper case
@params:
	letter: letter to be converted to upper case

@return: upper case of the letter parameter
*/

char toUpperCase(char letter);
/*
Will convert the case of the given char in upper case
@params:
	letter: letter to be converted to upper case

@return: upper case of the letter parameter
*/
char toLowerCase(char letter);

int vectorLength(char* vector);

char* invertirCase(char* palabra)
{
		
	int wordLength = vectorLength(palabra) + 1;

	char* inverted = new char[wordLength];
	cout << "Largo=" << wordLength; 
	for (int i = 0; i < wordLength; i++) {
		char letter = palabra[i];
		if (letter >= 65 && letter <= 90 ) { 
			inverted[i] = toLowerCase(letter);
		} else if(letter >= 97 && letter <= 122 ) {
			inverted[i] = toUpperCase(letter);
		} else {
			inverted[i] = letter;
		} 
		
	}
				
	return inverted;
}

int vectorLength(char* vector) {
	int counter = 0; 
	while(vector[counter++] != '\0');
	return counter - 1;
}

char toUpperCase(char letter) {
	int difference = 32;
	int upper = letter - difference;
	int isOutOfRange = upper < 65;
	return (!isOutOfRange) ? ((char)upper) : letter;
} 

char toLowerCase(char letter) {
	int difference = 32;
	int lower = letter + difference;
	int isOutOfRange = lower > 122;
	return (!isOutOfRange) ? ((char)lower) : letter;
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
