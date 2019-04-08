int main() {
	char a[1000] = { 0 }, b;
	int t = 1;
	cin >> a;
	for (int i = 0; i < strlen(a); i++) {
		if (i == 0)
			b = a[i];
		else {
			if ((a[i] == b - 'A' + 'a') || (a[i] == b + 'A' - 'a') || a[i] == b)
				t++;
			else {//????????????
				if (b <= 'z' && b >= 'a')
					b = b + 'A' - 'a';
				cout << '(' << b << ',' << t << ')';
				b = a[i];
				t = 1;
			}
		}
		if (i == strlen(a) - 1) {//?????????
			if (b <= 'z' && b >= 'a')
				b = b + 'A' - 'a';
			cout << '(' << b << ',' << t << ')';
		}

	}
	return 0;
}