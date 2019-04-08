/*
 * SumOfEdgeElements.cpp
 *
 *  Created on: 2012-12-11
 *      Author: Cui Zhaoxiong Class4 1200012931
 */
int sum = 0;
int m, n;
void Input(int(*a)[102]) {
	cin >> m >> n;
	for (int i = 0; i <= m - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			cin >> *(*(a + i) + j);
		}
	}
}
void Sum(int x, int y, int(*a)[102]) {//????
	sum += *(*(a + x) + y);
	if (x == 0 && y < n - 1)
		Sum(x, y + 1, a);
	else if (x < m - 1 && y == n - 1)
		Sum(x + 1, y, a);
	else if (x == m - 1 && y > 0)
		Sum(x, y - 1, a);
	else if (y == 0 && x > 1)
		Sum(x - 1, y, a);
	else
		return;
}
int main() {
	int a[102][102];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum = 0;
		Input(a);
		Sum(0, 0, a);
		if (i != 1)
			cout << endl;
		cout << sum;
	}
	return 0;
}
