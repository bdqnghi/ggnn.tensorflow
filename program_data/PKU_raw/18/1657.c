int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a[110][110] = { 0 };
		int min = 10000,s=0;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++)
				cin >> a[j][k];
		}
		for (int m = 1; m < n; m++) {
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < n; k++) {
					if ((j == 0 || j >= m) && (k == 0 || k >= m)) {
						if (a[j][k] < min)
							min = a[j][k];
					}
				}
				for (int k = 0; k < n; k++) {
					if ((j == 0 || j >= m) && (k == 0 || k >= m))
						a[j][k] = a[j][k] - min;
				}
				min = 10000;
			}
			for (int k = 0; k < n; k++) {
				for (int j = 0; j < n; j++) {
					if ((j == 0 || j >= m) && (k == 0 || k >= m)) {
						if (a[j][k] < min)
							min = a[j][k];
					}
				}
				for (int j = 0; j < n; j++) {
					if ((j == 0 || j >= m) && (k == 0 || k >= m))
						a[j][k]  = a[j][k] - min;
				}
				min = 10000;
			}
            s=s+a[m][m];
			for (int j=0;j<n;j++)
				a[j][m]=100000;
			for (int j=0;j<n;j++)
				a[m][j]=100000;

		}
         cout<<s<<endl;
	}
	return 0;
}
