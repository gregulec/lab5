#include<iostream>

using namespace std;

int main() {
	int n;
	cout << "Podaj n wielkosc tablicy";
	cin >> n;
	int *tab = new int[n];
	for (int i = 0; i < n; i++){
		tab[i] = 0;
		tab[i] = rand() % 101;
	}
	for (int i = 0; i < n; i++){
		cout << tab[i] << " ";
	};
	cout << endl;
	for (int i = 0; i < n; i++){
		for (int i = 0; i < n - 1; i++){
			int a;
			if (tab[i]>tab[i + 1]){
				a = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = a;
			}
		}
	}
	for (int i = 0; i < n; i++){
		cout << tab[i] << " ";
	}
}