int main() {
	int x, y, i = 1, j = 1, xi;
	cin >> x >> y;
	int a[1001] = { 0 }, b[1001] = { 0 };
	a[1] = x;
	b[1] = y;
	while ( a[i] >= 1) {
		a[i + 1] = a[i] / 2;
		i ++;
	}
	while ( b[j] >= 1) {
		b[j + 1] = b[j] / 2;
		j ++;
	}
	while ( a[i] == b[j] && i >= 1 && j >= 1) {
		xi = a[i];
		i --;
		j --;
	}
	cout << xi << endl;
	return 0; 
}

