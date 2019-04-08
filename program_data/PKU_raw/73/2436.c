int main() {
	int a[5][5] = { 0 }, i, j, max1[5], least1[5], t = 0;

	int max_value(int x, int max);
	int least_value(int x, int least);

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			cin >> a[i][j];

	for (i = 0; i < 5; i++) {

		for (j = 0, max1[i] = a[i][0], least1[i] = a[0][i]; j < 5; j++) {
			max1[i] = max_value(a[i][j], max1[i]);
			least1[i] = least_value(a[j][i], least1[i]);
		}
	}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (max1[i] == a[i][j] && least1[j] == a[i][j]) {
				cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
				t = t + 1;
			}

	if (t == 0)
		cout << "not found" << endl;

	return 0;
}

int max_value(int x, int max) {
	if (x > max)
		return x;
	else
		return max;
}
int least_value(int x, int least) {
	if (x > least)
		return least;
	else
		return x;
}
