#include<iostream>

using namespace std;

int fib(int n){
	if (n < 3) return 1;
	else return fib(n - 1) + fib(n - 2);
}

int main() {
	int n;
	cout << "Podaj n";
	cin >> n;
	cout << "Fibonaci " << fib(n) << endl;
}