#include <iostream>
#include <stdlib> 

void printAllElements(int arr[], int size);
void printEvenIndices(int arr[], int size);
void printEvenValues(int arr[], int size);
void printReversedOrder(int arr[], int size);
void printFirstAndLast(int arr[], int size);

int main() {

}
void printAllElements(int arr[], int size) {
	for (i=0; i < size; i++){
		cout << arr[i] << "";
	}
}
void printEvenIndices(int arr[], int size) {
	for (i = 0; i < size; i += 2) {
		cout << arr[i] << "";
	}
}
void printEvenValues(int arr[], int size) {
	for (i = 0; i < size; i++) {
		if (arr[i] % 2 = 0) {
			cout << arr[i] << "";
		}
	}
}
void printReversedOrder(int arr[], int size) {
	for (i = size - 1; i >= 0; i--) {
		cout << arr[i] << "";
	}
}
