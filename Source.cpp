#include <iostream>
#include <math.h>
using namespace std;
int main() {
	/*int i = 2;
	while (i <= 100) {
		cout << i;
		i += 2;
	}*/
	/*int a;
	cin >> a;
	while (a > 0) {
		cin >> a;
	}*/
	/*int N, i;
	cin >> N;
	i = 1;
	while (i * i <= N) {
		cout << i * i << ' ';
		i++;
	}*/
	/*int i, n;
	cin >> n;
	i = 2;
	while (n % i != 0) {
		i++;
	}
	cout << i << endl;*/
	/*int i, n;
	cin >> n;
	i = 2;
	while (i <= n / 2) {
		if (n% i == 0) cout << i << endl;
		i++;
	}*/
	/*int i = 2, n;
	cin >> n;
	while (i <= n) {
		cout << i << endl;
		i *= 2;
	}*/
	/*double x, y, k = 0;
	cin >> x >> y;
	while (x < y) {
		x = 1.04*x;
		k++;
	}
	cout << k << endl;*/
	int a;
	while (a != 0) {
		cout << a % 10 << " ";
		a = a / 10;
	}
	return 0;
}