#include<iostream>
#include<locale.h>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int n, x;
	srand(time(0));
	x = rand() % 99 + 1;
	cout << " Digita um n�mero: ";
	cin >> n;
	if (x > n) {
		cout << " Est�s abaixo do n�mero! \n";
	}else if (x == n) {
		cout << " ACERTAS-TE!!!!!";
	}else {
		cout << " Est�s acima do n�mero! \n";
	}
}