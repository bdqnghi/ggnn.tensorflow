int main() {
	char a[110] = { 0 };
	while (cin >> a) {
		cout << a << endl;
		int zuo[110] = { 0 }, z = 0;
		int you[110] = { 0 }, y = 0;
		for (int i = 0; i < strlen(a); i++) {
			if (a[i] == '(')
				zuo[z++] = i;
			if (a[i] == ')')
				you[y++] = i;
		}
		for (int i = 0; i < y; i++) {
			for (int j = z - 1; j >= 0; j--) {
				if (zuo[j] < you[i]) {
					zuo[j] = 200;
					you[i] = -100;
					break;
				}
			}
		}
		for (int j = 0; j < strlen(a); j++) {
			a[j] = ' ';
		}
		for (int j = 0; j < z; j++) {
			if (zuo[j] != 200)
				a[zuo[j]] = '$';
		}
		for (int j = 0; j < y; j++) {
			if (you[j] != -100)
				a[you[j]] = '?';
		}

		cout << a << endl;

	}
	return 0;
}
