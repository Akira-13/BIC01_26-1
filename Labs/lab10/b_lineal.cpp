#include <iostream>
using namespace std;
int main()
{
	const int N = 5;
	int A[N] = {6,9,3,4,7};
	int target;

	for(int i = 0; i < N; i++){
			cout << A[i] << " ";
	}
	
	cout << "\ningrese el objetivo: "; cin >> target;



	for (int i = 0; i < N; i++){
		cout << "Comparo " << A[i] << " con " << target << endl;
		if (A[i] == target){
				cout << "Son iguales!\n";
			}
		else{
			cout << "No son iguales!\n";
		}
	}
	return 0;
}

