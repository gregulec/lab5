#include<iostream>

using namespace std;

int min(int*tab, int n) {
	int minimum = 0;
	for (int i = 0; i < n; i++) {
		if (tab[i] > tab[i + 1]) minimum = tab[i];
	}
	return minimum;
}

int max(int*tab, int n) {
	int maximum = 0;
	for (int i = 0; i < n; i++) {
		if (tab[i] < tab[i + 1]) maximum = tab[i];
	}
	return maximum;
}

int sum(int*tab, int n) {
	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma += tab[i];
	}
	return suma;
}

int avg(int*tab, int n) {
	int srednia = 0;
	srednia = sum(tab, n) / n;
	return srednia;
}

void statistic(int*tab, int n){
	cout << "Minimum " << min(tab, n) << endl;
	cout << "Maximum " << max(tab, n) << endl;
	cout << "Suma " << sum(tab, n) << endl;
	cout << "Srednia " << avg(tab, n) << endl;
}

int main() {
	int n;
	cout << "Wybierz wielkosc tablicy" << endl;
	cin >> n;
	int *tab = new int[n];
	for (int i = 0; i < n; i++) {
		tab[i] = rand() % 11;
		cout << tab[i] << " ";
	}
	cout << endl;
	cout << "Minimum " << min(tab, n) << endl;
	cout << "Maximum " << max(tab, n) << endl;
	cout << "Suma " << sum(tab, n) << endl;
	cout << "Srednia " << avg(tab, n) << endl;
	cout << endl << endl;
	statistic(tab, n);
	delete[]tab;
}