int sum = 0;
int a[101][101];
void guiling(int n){
	int i, j;
	for(i = 0; i < n; i ++){
		int min = a[i][0];
		for(j = 1; j < n; j ++){
			if(a[i][j] < min){
				min = a[i][j];
			}
		}
		for(j = 0; j < n; j ++){
			a[i][j] = a[i][j] - min;
		}
	}
	for(i = 0; i < n; i ++){
		int min = a[0][i];
		for(j = 1; j < n; j ++){
			if(a[j][i] < min){
				min = a[j][i];
			}
		}
		for(j = 0; j < n; j ++){
			a[j][i] = a[j][i] - min;
		}
	}
}
void xiaojian(int n){
	int i, j;
	for(i = 1; i < n - 1; i ++){
		for(j = 0; j < n; j ++){
			a[i][j] = a[i+1][j];
		}
	}
	for(i = 1; i < n - 1; i ++){
		for(j = 0; j < n - 1; j ++){
			a[j][i] = a[j][i+1];
		}
	}
}
void f(int n){
	if(n == 1)
		return;
	else{
		guiling(n);
		sum += a[1][1];
		xiaojian(n);
		f(n - 1);
	}
}
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i ++){
		sum = 0;
		for(int j = 0; j < n; j ++){
			for(int k = 0; k < n; k ++){
				cin >> a[j][k];
			}
		}
		f(n);
		cout << sum << endl;
	}
	return 0;
}
