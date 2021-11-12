//karina baslyk
#include<iostream>
using namespace std;
int main() {
	/*int i=2,n;
	cin >> n;
	while (i <= n) {
		cout << i << endl;
		i *= 2;
	}*/
	/*double x, y;
	int k = 0;
	cin >> x >>y;
	while (x < y) {
		x *= x * 1.1;
		k++;
	}
	cout << k << endl;*/
	//дано целое число неизвестной длины.
	int a;
	cin >> a;
	while (a!=0) {
		cout << a%10 << ' ';
		a=a/10;
	}
	return 0;
}