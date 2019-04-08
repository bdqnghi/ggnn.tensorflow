int main() {
	int year, month, day, sum = 0;
	cin >> year >> month >> day;
	int m1[12] ={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int m2[12] ={ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for ( int i = 0; i <= month - 1; i ++ ) {
		if ( i == month - 1 ) sum += day;
		else {
			if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) 
				sum += m2[i];
			else 
				sum += m1[i];
		}
	}
	cout << sum << endl;
	return 0;
}
