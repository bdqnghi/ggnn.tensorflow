int n, m;
int num1[100], num2[100], num3[1000];
void read(){
	cin >> n >> m;
	for ( int i = 1; i <= n; i ++ ) {
		cin >> num1[i];
	}
	for ( int i = 1; i <= m; i ++ ) {
		cin >> num2[i];
	}
}

void sort( int num1[], int num2[] ) {
	for ( int i = 1; i <= n - 1; i ++ ) {
		for ( int j = 1; j <= n - i; j ++ ) {
			if ( num1[j] > num1[j + 1] ) swap (num1[j], num1[j + 1]);
		}
	}
	for ( int i = 1; i <= m - 1; i ++ ) {
		for ( int j = 1; j <= m - i; j ++ ) {
			if ( num2[j] > num2[j + 1] ) swap (num2[j], num2[j + 1]);
		}
	}
}
void hebing ( int num1[], int num2[], int num3[] ) {
	for ( int i = 1; i <= n + m; i ++ ) {
		if ( i <= n ) num3[i] = num1[i];
		else num3[i] = num2[ i - n ];
	}
}
void display ( int num3[] ) {
	for ( int i = 1; i <= n + m ; i ++ ) {
		if ( i == 1 ) cout << num3[i];
		else cout << " " << num3[i];
	}
}


int main() {
	read();
	sort(num1, num2);
	hebing(num1, num2, num3);
	display(num3);
	return 0;
}