
int main() {
	int n, a[100][100], row, col, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i ++){
		sum = 0;
		cin >> row >> col;
		for(int i = 0; i < row; i ++)
			for(int j = 0; j < col; j ++)
				cin >> a[i][j];
		if(row == 1 && col == 1) cout <<*(a[0]);
		else {
		for(int i = 0; i < col; i ++){
			sum += *(a[0] + i);
			sum += *(a[row-1] + i);
		}
		for(int j = 1; j <row-1; j ++){
			sum += *(a[j]);
			sum += *(a[j]+col-1);
		}
		cout << sum <<endl;
	}
	}
	return 0;
}