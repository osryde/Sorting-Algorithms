#include <iostream>
#include <string>
using namespace  std;



void merge(int A[], int p, int q,  int r){
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1+1];
	int R[n2+1];
	for(int i = 0; i < n1; i++)
		L[i] = A[p+i];
	for(int i = 0; i < n2; i++)
		R[i] = A[q+i+1];
	L[n1] = 100000000;
	R[n2] = 100000000;
	
	int i = 0, j = 0, k = p;
	
	for(k = p; k <= r; k++){
		if (L[i] < R[j]){
			A[k] = L[i];
			i++;
		}else{
			A[k] = R[j];
			j++;
		}
	} 
	
}



void MergeSort(int A[], int p, int r){
	if(p < r){
		int q = (p+r)/2;//Il floor viene fatto automaticamente
		MergeSort(A, p, q);
		MergeSort(A, q+1, r);
		merge(A, p, q, r);
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
	
	MergeSort(array, 0, 9);//Chiamo l'algortimo di ordinamento
	
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
