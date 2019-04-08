/*??????
 *?????zhizhen1.cpp
 *Created on: 2012-12-19
 *???????
 */
int main() {
	int n;
	cin >> n;                                       //??????
	char p[5000];
	cin.getline(p, 5000);                           //?????
	cin.getline(p, 5000);                           //??????
	char m[500][45];
	char (*h)[45];
	h = m;
	int i, j, k;
	for (i = 0, j = 0, k = 0; i < strlen(p); i++) {
		if (*(p + i) != ' ') {
			*(*(h + j) + k) = *(p + i);
			k++;
		}                                           //???????????
		else if (i != strlen(p) - 1) {
			j++;
			k = 0;
		}
	}

	int sum, i1;
	for (sum = 0, i1 = 0; i1 < n; i1++) {
		sum = sum + strlen(m[i1]);

		if ((sum + strlen(m[i1 + 1]) + 1 <= 80) && (i1 != n - 1)) {
			cout << *(h + i1) << " ";
			sum++;
		}                                           //????“ ”???
		else {
			cout << *(h + i1) << endl;
			sum = 0;
		}                                           //?????
	}

	return 0;                                       //????
}
