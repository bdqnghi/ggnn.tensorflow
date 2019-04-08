int main() {
	int n;
	cin >> n;
	int s = 0;
	char p[1000][100] = { 0 };
	for (int i = 0; i < n; i++) {
		int j = 0;
		cin >> *(p + i);
		while (*(*(p + i) + j) != 0) {//?????????
			s++;
			j++;
		}
		s++;
		if (i < n - 1 && i != 0) {//??
			if (s <82)
				cout << *(p + i - 1) << ' ';
			else {

				cout << *(p + i - 1) << endl;
				s = j+1;
			}
		} else if (i == n - 1) {
			if (s < 82)
				cout << *(p + i - 1) << ' ' << *(p + i);
			else
				cout << *(p + i - 1) << endl << *(p + i);
		}

	}
	return 0;
}
