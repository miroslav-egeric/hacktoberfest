#include <iostream>

using namespace std;


/* Swaps two integers */
void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/* Selection sort */
void SelectionSort(int arr[], int arrLen, bool ascending) {
	int i, j, imin, imax;

	if (ascending == true) {
		for (i = 0; i < arrLen - 1; i++) {
			imin = i;
			for (j = i + 1; j < arrLen; j++) {
				if (arr[j] < arr[imin]) { imin = j; }
				Swap(&arr[imin], &arr[i]);
			}
		}
	} else if (ascending == false) {
		for (i = 0; i < arrLen - 1; i++) {
			imax = i;
			for (j = i + 1; j < arrLen; j++) {
				if (arr[j] > arr[imax]) { imax = j; }
				Swap(&arr[imax], &arr[i]);
			}
		}
	}
}

int main() {
    int A[50];
	int N, i;


	cout << "Input the size of the array: ";
	cin >> N;

	cout << "Input array elements:\n";

	for (i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (i = 0; i < N; i++) {
		cout << A[i];
		cout << " ";
	}

	SelectionSort(A, N, false);

	cout << "\n";
	for (i = 0; i < N; i++) {
		cout << A[i];
		cout << " ";
	}

	SelectionSort(A, N, true);

	cout << "\n";
	for (i = 0; i < N; i++) {
		cout << A[i];
		cout << " ";
	}	
}
