#include<iostream>
using namespace std;
void verifyPrime(int n)
{
	if (n < 2) {
		cout << n << "n is not a prime\n";
	}
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 0) {
		cout << n << " n is a prime\n";
	}
	else {
		cout << n << " n is not a prime\n";
	}
}
int main() {
	int n;
	cout << "enter interger n : ";
	cin >> n;
	system("pause");
	return 0;
}
