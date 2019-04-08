
int main() {
	int n;
	cin >> n;
	for ( int i = 1; i <= n; i ++ ) {
	int year, month1, month2;
	int sum = 0;
	cin >> year >> month1 >> month2;
	int m1[12] ={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int m2[12] ={ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ( month1 > month2 ) swap( month1, month2 );
	for ( int i = month1; i <= month2 - 1; i ++ ) {
		if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) {
			sum += m2[i - 1];
		}
		else sum += m1[i - 1];
	}
	if ( sum % 7 == 0 ) cout << "YES" << endl;
	else cout << "NO" << endl;
	}
	return 0;
}
