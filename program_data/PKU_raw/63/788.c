int main()
{
	int a[101][101], b[101][101], c[101][101];
	int x1, y1, x2, y2;

	cin >> x1 >> y1;
	for (int i=0; i<x1; i++) {
		for (int j=0; j<y1; j++) {
			cin >> a[i][j];
		}
	}
	cin >> x2 >> y2;
	for (int i=0; i<x2; i++) {
		for (int j=0; j<y2; j++) {
			cin >> b[i][j];
		}
	}

	for (int i=0; i<x1; i++) {
		int first = true;
		for (int j=0; j<y2; j++) {
			c[i][j] = 0;
			for (int k=0; k<x2; k++) {
				c[i][j] += a[i][k]*b[k][j];
			}
			if (first) {
				first = false;
			}
			else {
				cout << " ";
			}
			cout << c[i][j];			
		}
		cout << endl;
	}

	return 0;
}