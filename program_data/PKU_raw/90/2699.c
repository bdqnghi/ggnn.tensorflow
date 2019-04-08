
int f(int, int);
int f_n(int, int);
int f_e(int, int);

int f(int x, int y){
	if (x == 1) return 1;
	return f_e(x, y) + f_n(x, y);
}

int f_e(int x, int y){
	return f(x-1, y);
}

int f_n(int x, int y){
	if (y < x) return 0;
	return f(x, y-x);
}

int main() {
	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> y >> x;
		cout << f(x, y) << endl;
	}
	return 0;
}
