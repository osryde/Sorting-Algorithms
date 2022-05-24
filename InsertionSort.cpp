#include <iostream>
#include <string>
using namespace std;

//Algoritmo di ordinamento -> Complessità O(n^2)
void Insertion(int array[], const int& lung){
	int chiave, j;
	for(int i = 1; i < lung; i++){//Inizio da 1 non da 2 perchè in gli array iniziano da zero
		chiave = array[i];
		j = i - 1;
		while(j >= 0 && chiave < array[j]){
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = chiave;
	}
}


int main(){
	int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	
	cout << "Array iniziale --> [ ";
	for(int i = 0; i < 10; i++){
		if(i == 9){
			cout << array[i];
			break;
		}
		cout << array[i] << " , ";
	}
	cout << " ]";
	
	Insertion(array, 10);//Chiamo l'algortimo di ordinamento
	
	cout << endl << "Array ordinato --> [ ";
	for(int i = 0; i < 10; i++){
		if(i == 9){
			cout << array[i];
			break;
		}
		cout << array[i] << " , ";
	}
	cout << " ]";
	
	
	return 0;
}
