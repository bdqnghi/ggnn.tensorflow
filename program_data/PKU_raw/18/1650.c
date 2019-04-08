/*
 * SequenceSumOfMatrixSubtractionAndZeroMaking.cpp
 *
 *  Created on: 2012-11-21
 *      Author: Cui Zhaoxiong Class4 1200012931
 */
int sum = 0;//??????????
int main() {
	void Subtraction(int[100][100], int);//????
	int n = 0;
	cin >> n;//??n
	int a[100][100];//???
	for (int f = 1; f <= n; f++) {
		for (int i = 0; i <= n - 1; i++) {
			for (int j = 0; j <= n - 1; j++) {
				cin >> a[i][j];
			}
		}
		sum = 0;
		Subtraction(a, n);
		if (f == n)
			cout << sum;
		else
			cout << sum << endl;
	}
	return 0;
}
void Subtraction(int m[100][100], int n) {
	//cout <<'*' <<endl;
	if (n != 1) {//????
		//????????
		for (int i = 0; i <= n - 1; i++) {
			int min = m[i][0];
			for (int j = 0; j <= n - 1; j++) {
				if (min > m[i][j])
					min = m[i][j];
			}
			for (int j = 0; j <= n - 1; j++) {
				m[i][j] -= min;
			}
		}
		/*
		 for (int i=0;i<=n-1;i++){
		 for (int j=0;j<=n-1;j++){
		 cout <<m[i][j] <<' ';
		 }
		 cout <<endl;
		 }
		 */
		//cout <<'/' <<endl;
		for (int i = 0; i <= n - 1; i++) {//????????
			int min = m[0][i];
			for (int j = 0; j <= n - 1; j++) {
				if (min > m[j][i])
					min = m[j][i];
			}
			for (int j = 0; j <= n - 1; j++) {
				m[j][i] -= min;
			}
		}
		/*
		 for (int i=0;i<=n-1;i++){
		 for (int j=0;j<=n-1;j++){
		 cout <<m[i][j] <<' ';
		 }
		 cout <<endl;
		 }
		 */
		sum += m[1][1];//sum??
		int mtuta[100][100];//?????
		for (int i = 0; i <= n - 1; i++) {//???2???2?????????
			if (i == 1)
				continue;
			for (int j = 0; j <= n - 1; j++) {
				if (j == 1)
					continue;
				/*
				 if (i==0&&j==0) mtuta[0][0]=m[0][0];
				 if (i==0&&j!=0) mtuta[0][j-1]=m[0][j];
				 if (i!=0&&j==0) mtuta[i-1][0]=m[i][0];
				 if (i!=0&&j!=0) mtuta[i-1][j-1]=m[i][j];
				 */
				mtuta[i - (i != 0)][j - (j != 0)] = m[i][j];
			}
		}
		Subtraction(mtuta, n - 1);//??
	}
}
