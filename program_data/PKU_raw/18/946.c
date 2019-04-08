int main() {
	int a[100][100], n, m, s = 0, i, j, x, y, t = 0;
	int (*p)[100];
	p=a;
	cin >> n;
	for (m = 1; m <= n; m++) {
		s = 0;
		t=0;
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++){
				cin >> (*(*(p+i)+j));//a[i][j];
			}

		for (y = n; y >1; y--) {


			for (i = 0; i < n - t; i++) {
				x = *(*(p+i));//a[i][0];
				for (j = 0; j < n - t; j++)
					if (x > *(*(p+i)+j))
						x = *(*(p+i)+j);
				for (j = 0; j < n - t; j++)
					*(*(p+i)+j) -= x;
			}



			for (j = 0; j < n - t; j++) {
				x = *(*(p)+j);
				for (i = 0; i < n - t; i++)
					if (x > *(*(p+i)+j))
						x = *(*(p+i)+j);
				for (i = 0; i < n - t; i++)
					*(*(p+i)+j) -= x;
			}


			s = s + *(*(p+1)+1);
			for (i = 0; i < n - t; i++) {
				for (j = 1; j < n - t-1; j++)
					*(*(p+i)+j) = *(*(p+i)+j+1);
			}
			for (i = 1; i < n - t-1; i++)
				for (j = 0; j < n - t; j++)
					*(*(p+i)+j) = *(*(p+i+1)+j);
			t++;
		}
		cout << s << endl;
	}
	return 0;
}
