/*
 * juzhenguiling.cpp
 *
 *  Created on: 2012-11-18
 *      Author: ??
 * ?????????
 */


int a[110][110], n, sum;
void calculate(int t) {
	int i,j,minimum;
	for (i =1; i <= n; i++) {
		minimum = a[i][1];
		for (j = t; j <= n; j++)//??????
			if (minimum > a[i][j])
				minimum = a[i][j];
		a[i][1]-=minimum;//??????
		for (j = t; j <= n; j++)
			a[i][j]-=minimum;

	}
  	for (i = 1; i <= n; i++) {//??????
		minimum = a[1][i];
		for (j = t; j <= n; j++)
			if (minimum > a[j][i])
				minimum = a[j][i];

			a[1][i]-= minimum;
		for (j = t; j <= n; j++)//??????
			a[j][i]-=minimum;

	}
    sum+=a[t][t];
	if (t<n) calculate(t+1);//??

}
int main() {
	int i, j, k;
	cin >> n;
	for (k = 1; k <= n; k++) {
		sum = 0;//????
		for (i = 1; i <= n; i++)
		for (j = 1 ;j <= n; j++)
		{
			cin >> a[i][j];

		}
		calculate(2);
		cout << sum << endl;
	}
	return 0;
}
