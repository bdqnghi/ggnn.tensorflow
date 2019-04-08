
//============================================================================
// Name        : 5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int n,m,imin;
int matrix[110][110];
void submin(int x, int y, int dx, int dy) {
	if (x == m || y == m) return;
	if (matrix[x][y] < imin)  {
		imin = matrix[x][y];
	}
	submin(x + dx, y + dy, dx, dy);
	matrix[x][y] =matrix[x][y]- imin;
}
void sub() {
	int i, j;
	for (i = 0; i < m; i++)
		for (j = 1; j < m; j++)
			{
			matrix[i][j] = matrix[i][j + 1];
			}
	for (i = 0; i < m; i++)
		for (j = 1; j < m; j++)
			{
			matrix[j][i] = matrix[j + 1][i];
			}
}
int main() {
	int i, j, sum, t;
	for (cin >> n, t = 0; t < n; t++) {
		for (i=0;i<n;i++)
			for (j = 0; j < n; j++)
				cin >> matrix[i][j];
		for (sum = 0,m=n; m >= 1; m--) {
			for (i = 0; i < 2 * m; i++) {
				imin = 10000;
				submin((i%m)*(1-i/m),(i%m)*(i/m), i / m, 1 - i / m);
			}
			sum =sum+ matrix[1][1];
			sub();
		}
		cout << sum << endl;
	}
}