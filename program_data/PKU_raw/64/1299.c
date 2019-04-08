/*
 *???? distanceorder.cpp
 *??????
 *????: 2012-11-10
 *???????????????
 */
int main() {
	int n, i, j, l, k = 0, b;//i,j,l?????
	cin >> n;
	int x[10] = { 0 }, y[10] = { 0 }, z[10] = { 0 }; // ??n?????
	int piont[6][100];// ?????????
	float a;//a?????
	float dis[100] = { 0 };
	for (i = 0; i < n; i++)
		cin >> x[i] >> y[i] >> z[i]; // ????
	for (i = 0; i <= n - 2; i++)
		for (j = i + 1; j <= n - 1; j++) {
			dis[k] = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i]
					- y[j]) + (z[i] - z[j]) * (z[i] - z[j])); // ?????????
			piont[0][k] = x[i];
			piont[1][k] = y[i];
			piont[2][k] = z[i];
			piont[3][k] = x[j];
			piont[4][k] = y[j];
			piont[5][k] = z[j]; // ???????????????
			k = k + 1;
		}//?????k???
	for (i = 0; i < k - 1; i++)
		for (j = 0; j < k - 1 - i; j++)
			if (dis[j] < dis[j + 1]) {
				a = dis[j];
				dis[j] = dis[j + 1];
				dis[j + 1] = a;
				for (l = 0; l <= 5; l++)
					{b = piont[l][j];
				piont[l][j] = piont[l][j + 1];
				piont[l][j + 1] = b;}
			} // ?????????????
	for (i = 0; i < k ; i++)
		cout << fixed << setprecision(0) << "(" << piont[0][i] << ","
				<< piont[1][i] << "," << piont[2][i] << ")-(" << piont[3][i]
				<< "," << piont[4][i] << "," << piont[5][i] << ")=" << fixed
				<< setprecision(2) << dis[i] << endl; // ????????
	return 0;
}
