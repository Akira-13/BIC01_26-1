#include <iostream>
using namespace std;
int main()
{
	int aux;
	const int N = 5;
	int A[N] = {6,9,3,4,7};
	/*
	 *	cuando i = 0, 3 acabará en su posición correcta por ser el menor
	 * i = 0 -> [6,9,4,7,3]
	 */
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N-1; j++){
			//Intercambiar A[j] con A[j+1]
			if(A[j] < A[j+1]){
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}
		}
	}

	for(int i = 0; i < N; i++){
			cout << A[i] << " ";
		}
	return 0;
}

