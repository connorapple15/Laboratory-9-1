#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
void printAllElements(int arr[], int size);
void printEvenIndices(int arr[], int size);
void printEvenValues(int arr[], int size);
void printReversedOrder(int arr[], int size);
void printFirstAndLast(int arr[], int size);

int main() {
	const int SIZE = 10;
	int arr[SIZE];

	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 9000 + 1000;
	}
	cout << "The random integers: ";
	printAllElements(arr, SIZE);

	cout << "Even indices: ";
	printEvenIndices(arr, SIZE);

	cout << "Even values: ";
	printEvenValues(arr, SIZE);

	cout << "Reversed order: ";
	printReversedOrder(arr, SIZE);

	cout << "First and last: ";
	printFirstAndLast(arr, SIZE);
}
void printAllElements(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void printEvenIndices(int arr[], int size) {
	for (int i = 0; i < size; i += 2) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void printEvenValues(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}
void printReversedOrder(int arr[], int size) {
	for (int i = size - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void printFirstAndLast(int arr[], int size) {
	cout << arr[0] << " " << arr[size - 1];
	cout << endl;
}