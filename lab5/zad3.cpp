#include<iostream>

using namespace std;

int dodawaniewektorow(){
	int n;
	cout << "Podaj n";
	cin >> n;
	int *v1 = new int[n];
	int *v2 = new int[n];
	for (int i = 0; i < n; i++){
		v1[i] = 0;
		v1[i] = rand() % 25 + 3;
	}
	cout << "[";
	for (int i = 0; i < n; i++){
		cout << v1[i] << " ";
	}
	cout << "]" << endl;
	for (int i = 0; i < n; i++){
		v2[i] = 0;
		v2[i] = rand() % 25 + 3;
	}
	cout << "[";
	for (int i = 0; i < n; i++){
		cout << v2[i] << " ";
	}
	cout << "]" << endl;
	int suma = 0;
	int roznica = 0;
	for (int i = 0; i < n; i++){
		suma += v1[i] + v2[i];
	}
	return suma;
	delete[]v1;
	delete[]v2;
}

int odejmowaniewektorow(){
	int n;
	cout << "Podaj n";
	cin >> n;
	int *v1 = new int[n];
	int *v2 = new int[n];
	for (int i = 0; i < n; i++){
		v1[i] = 0;
		v1[i] = rand() % 25 + 3;
	}
	cout << "[";
	for (int i = 0; i < n; i++){
		cout << v1[i] << " ";
	}
	cout << "]" << endl;
	for (int i = 0; i < n; i++){
		v2[i] = 0;
		v2[i] = rand() % 25 + 3;
	}
	cout << "[";
	for (int i = 0; i < n; i++){
		cout << v2[i] << " ";
	}
	cout << "]" << endl;
	int suma = 0;
	int roznica = 0;
	for (int i = 0; i < n; i++){
		roznica += v1[i] - v2[i];
	}
	return roznica;
	delete[]v1;
	delete[]v2;
}

int mnozeniewektorow() {
	int n;
	cout << "Podaj n";
	cin >> n;
	int *v1 = new int[n];
	int *v2 = new int[n];
	for (int i = 0; i < n; i++){
		v1[i] = 0;
		v1[i] = rand() % 25 + 3;
	}
	cout << "[";
	for (int i = 0; i < n; i++){
		cout << v1[i] << " ";
	}
	cout << "]" << endl;
	for (int i = 0; i < n; i++){
		v2[i] = 0;
		v2[i] = rand() % 25 + 3;
	}
	cout << "[";
	for (int i = 0; i < n; i++){
		cout << v2[i] << " ";
	}
	cout << "]" << endl;
	int suma = 0;
	for (int i = 0; i < n; i++){
		suma += v1[i] * v2[i];
	}
	cout << "Iloczyn skalarny " << endl;
	return suma;
	delete[]v1;
	delete[]v2;
}

void mnozeniemacierzy() {
	int n, m, p;
	cout << "Podaj rozmiar m macierzy" << endl;
	cin >> m;
	cout << "Podaj rozmiar n macierzy" << endl;
	cin >> n;
	cout << "Podaj rozmiar p macierzy" << endl;
	cin >> p;
	cout << endl;
	int **A = new int*[n];
	int **B = new int*[m];
	int **C = new int*[n];
	for (int i = 0; i < n; i++) {
		A[i] = new int[m];
		for (int k = 0; k < m; k++){
			A[i][k] = rand() % 13 + 1;
		}
	}
	cout << "A" << endl;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++){
			cout << A[i][k] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int k = 0; k < m; k++) {
		B[k] = new int[p];
		for (int j = 0; j < p; j++){
			B[k][j] = rand() % 13 + 1;
		}
	}

	cout << "B" << endl;
	for (int k = 0; k < m; k++) {
		for (int j = 0; j < p; j++){
			cout << B[k][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < n; i++) {
		C[i] = new int[p];
		for (int j = 0; j < p; j++){
			C[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j <p; j++){
			for (int k = 0; k < m; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	cout << "C" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[]A[i];
	}
	for (int i = 0; i < m; i++) {
		delete[]B[i];
	}
	for (int i = 0; i < n; i++) {
		delete[]C[i];
	}

	delete[]A;
	delete[]B;
	delete[]C;
}

void dzialaniamacierzy() {
	int n, m;
	cout << "Podaj m liczba wierszy macierzy" << endl;
	cin >> m;
	cout << "Podaj n liczba kolumn macierzy" << endl;
	cin >> n;
	int **A = new int*[m];
	int **B = new int*[m];
	int **C = new int*[m];
	int **D = new int*[m];
	for (int i = 0; i < m; i++) {
		A[i] = new int[n];
		B[i] = new int[n];
		C[i] = new int[n];
		D[i] = new int[n];
		for (int j = 0; j < n; j++){
			A[i][j] = rand() % 12 - 16;
			B[i][j] = rand() % 12 - 16;
		}
	}
	cout << "A" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "B" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			C[i][j] = A[i][j] + B[i][j];
			D[i][j] = A[i][j] - B[i][j];
		}
	}
	cout << "C" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "D" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << D[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++) {
		delete[]A[i];
		delete[]B[i];
		delete[]C[i];
		delete[]D[i];
	}

	delete[]A;
	delete[]B;
	delete[]C;
	delete[]D;
}

int main() {
	cout << "Dodawanie wektorow " << dodawaniewektorow() << endl << endl;
	cout << "Odejmowanie wektorow " << odejmowaniewektorow() << endl << endl;
	cout << "Mnozenie wektorow " << mnozeniewektorow() << endl << endl;
	cout << endl << "Dodawanie i odejmowanie macierzy ";
	dzialaniamacierzy();
	cout << endl << "Mnozenie macierzy ";
	mnozeniemacierzy();
	cout << endl << endl;
}