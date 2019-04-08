
int main() {
	int i, n;
	cin >> n;
	int x[n], y[n];
	for (i = 0; i < n; i++)//??????
		cin >> x[i] >> y[i];
	for (i = 1; i < n; i++) {//???????
		if ((y[0] * x[i] - y[i] * x[0]) > 0.05 * x[i] * x[0])
			cout << "worse" << endl;
		else if ((y[i] * x[0] - y[0] * x[i]) > 0.05 * x[i] * x[0])
			cout << "better" << endl;
		else
			cout << "same" << endl;
	}
	return 0;
}