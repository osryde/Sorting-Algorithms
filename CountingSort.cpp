//Algortimo Counting Sort C++ ver.1
#include <iostream>
using namespace std;


void CountingSort(int A[], int B[], int k){
	int C[k];
	for(int i = 0; i < k; i++)
		C[i] = 0;
	for(int i = 0; i < 10; i++)
		C[A[i]]++;
	for(int i = 1; i < k; i++)
		C[i] += C[i-1];
	for(int i = 0; i < 10; i++){
		B[C[A[i]]-1] = A[i];
		C[A[i]]--;
	}
}








int main(){
	
	int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int array2[10];
	int k = 20;
	
	CountingSort(array, array2, k);
	
	cout << "[ ";
	for(int i = 0; i < 10; i++){
		cout << array2[i] << " ";
	}
	cout << "]";
	
	
	return 0;
}
