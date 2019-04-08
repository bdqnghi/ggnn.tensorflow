/*
 *  ???.cpp
 *  Created on: 2012-11-19
 *  Author:???
 */
int f(int a, int b) {
	if (a == b)
		return a;
	if (a > b) {
		a = a % 2 == 0 ? a / 2 : (a - 1) / 2;
		return f(a, b);
	} else {
		b = b % 2 == 0 ? b / 2 : (b - 1) / 2;
		return f(a, b);
	}
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << f(a, b) << endl;
	return 0;
}
