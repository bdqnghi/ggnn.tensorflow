
int main() {
	char str[1000][45];
	int n, sum = 0;
	cin >> n;
	for ( int i = 1; i <= n; i ++ ) {
		cin >> str[i];
	}
	for ( int i = 1; i <= n; i ++ ) {
		if ( sum == 0 ) {
			cout << str[i];
			sum += strlen( str[i] );
		}
		else if ( sum + strlen( str[i] ) + 1 <= 80 ) {
			cout << " " << str[i];
			sum += strlen( str[i] ) + 1;
		}
		else {
			cout << endl;
			sum = 0;
			i = i - 1;
		}
	}
	return 0;
}
	
