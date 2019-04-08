int checkrun(int a) {
	if (a % 4 != 0) {
		return 0;
	} else {
		if (a % 100 == 0) {
			if (a % 400 == 0)
				return 1;
			else
				return 0;
		} else {
			return 1;
		}
	}
}
int main() {
	int n, month1, month2, i, year, temp, day, j;
	int a1[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int a2[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cin >> n;
	for (j = 0; j < n; j++) {
		cin >> year >> month1 >> month2;
		if (month1 < month2)
			;
		else {
			temp = month1;
			month1 = month2;
			month2 = temp;
		}
		if (checkrun(year) != 1) {
			day = 0;
			for (i = month1; i < month2; i++) {
				day = day + a1[i];
			}
			if (day % 7 == 0) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		} else {
			day = 0;
			for (i = month1; i < month2; i++) {
				day = day + a2[i];
			}
			if (day % 7 == 0) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
