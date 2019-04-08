/*
 * ???????
 *  ????: 2010-12-24
 *    ??????
 */

int run(int y) {
	int i;
	if (y % 4 == 0)
		if (y % 100 == 0)
			if (y % 400 == 0)
				i = 1;
			else
				i = 0;
		else
			i = 1;
	else
		i = 0;
	return i;
}
int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int year, m1, m2,n=0;
		cin >> year >> m1 >> m2;
		if (run(year) == 1) {
			int  yue[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30,
					31 };
			if (m1 < m2) {
				for (int j = m1 - 1; j < m2 - 1; j++)
					n = n + yue[j];
				if (n % 7 == 0)
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			} else {
				for (int j = m2 - 1; j < m1 - 1; j++)
					n = n + yue[j];
				if (n % 7 == 0)
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
		} else {
			int n = 0, yue[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,
					31 };
			if (m1 < m2) {
				for (int j = m1 - 1; j < m2 - 1; j++)
					n = n + yue[j];
				if (n % 7 == 0)
					cout << "YES" << endl;
				else
					cout << "NO" << endl;

			} else {
				for (int j = m2 - 1; j < m1 - 1; j++)
					n = n + yue[j];
				if (n % 7 == 0)
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
		}
	}
	return 0;
}