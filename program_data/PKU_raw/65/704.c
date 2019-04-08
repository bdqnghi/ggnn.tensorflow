

int main () {
	int num;
	cin >> num;
	int aWinCount = 0;
	int bWinCount = 0;
	for (int i = 0; i < num; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 0) {
			if (b == 1) {
				aWinCount++;
			} else if (b == 2) {
				bWinCount++;
			}
		}
		if (a == 1) {
			if (b == 0) {
				bWinCount++;
			} else if (b == 2) {
				aWinCount++;
			}
		}
		if (a == 2) {
			if (b == 1) {
				bWinCount++;
			} else if (b == 0) {
				aWinCount++;
			}
		}
	}
	if (aWinCount == bWinCount) {
		cout << "Tie" << endl;
	} else if (aWinCount > bWinCount) {
		cout << "A" << endl;
	} else {
		cout << "B" << endl;
	}
}

