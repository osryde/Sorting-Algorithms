#include <iostream>
using namespace std;

//Algoritmo Quick-Sort usando anche partition per suddividere in due sottoarray

int Partition(int array[], int in, int fin){
	int x = array[fin];
	int j = in-1;
	int y;
	for(int i = in; i < 10; i++){
		if(array[i] < x){
			j++;
			y = array[j];
			array[j] = array[i];
			array[i] = y;
		}
	}
	array[fin] = array[j+1];
	array[j+1] = x;
	return j+1;//è la posizione del pivot
}


void QuickSort(int array[], int in, int fin){
	if(in < fin){
		int q = Partition(array, in, fin);
		QuickSort(array, in, q-1);
		QuickSort(array, q+1, fin);
	}
}


int main(){
	
	int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	QuickSort(array, 0, 9);
	
	cout << "[ ";
	for(int i = 0; i < 10; i++){
		cout << array[i] << " ";
	}
	cout << "]";
	
	
	return 0;
}
