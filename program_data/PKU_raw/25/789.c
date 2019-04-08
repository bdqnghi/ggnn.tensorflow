/*?????????????N(N<=100)???2?N?????
 *????: 2012-12-10
 *??: ??
 */
int main() {
	int N, i, j, res[40] = { 1 }, len = 1;
	cin >> N;
	for (i = 0; i < N; i++) {
		for (j = 0; j < len; j++) {
			res[j] = res[j] * 2 + res[len];
			if (res[j] > 9) {
				res[j] -= 10;
				res[len] = 1;
			}
			else
				res[len] = 0;
		}
		if (res[len])
			len++;
	}
	for (i = len - 1; i >= 0; i--)
		cout << res[i];
	return 0;
}