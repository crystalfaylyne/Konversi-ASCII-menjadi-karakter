#include <iostream>
using namespace std;

int main() {
	int bil1, bil2, bil3, bil4, bil5, bil6;

	cout << "=== PROGRAM KODE ASCII ===" << endl;

	cout << "Huruf ke-1 : ";
	cin >> bil1;

	cout << "Huruf ke-2 : ";
	cin >> bil2;

	cout << "Huruf ke-3 : ";
	cin >> bil3;

	cout << "Huruf ke-4 : ";
	cin >> bil4;

	cout << "Huruf ke-5 : ";
	cin >> bil5;
	
	cout << "Huruf ke-6 : ";
	cin >> bil6;

	cout << "\n" << (char)bil1 << (char)bil2 << (char)bil3 << (char)bil4 << (char)bil5 << (char)bil6 << endl;
	return 0;
}