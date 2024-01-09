#include<iostream>
#include<locale.h>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int n, x;
	srand(time(0));
	x = rand() % 99 + 1;
	cout << " Digita um número: ";
	cin >> n;
	if (x > n) {
		cout << " Estás abaixo do número! \n";
	}else if (x == n) {
		cout << " ACERTAS-TE!!!!!";
	}else {
		cout << " Estás acima do número! \n";
	}
}