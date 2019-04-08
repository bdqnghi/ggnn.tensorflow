int main() {
	char str[105];
	cin >> str;
	int len = strlen( str ), num = 0, shang[105], j = 0, sign = 0, flag = 0;
	for ( int i = 0; str[i] != '\0'; i ++ ) {
		num += str[i] - '0';
		if ( num >= 13 ) {
			flag = 1;
			shang[j ++] = num / 13;
			if ( str[i + 1] != '\0' ) num = ( num % 13 ) * 10;
			else num = num % 13;
		}
		else if ( str[i + 1] != '\0' ) {
			num *= 10;
			shang[j ++] = 0;
		}
		else shang[j ++] = 0;
	}
	if ( flag == 0 ) cout << 0 << endl << num << endl; 
	else {
		for ( int i = 0; i < j; i ++ ) {
			if ( sign == 0 && shang[i] == 0 );
			else {
				cout << shang[i];
				sign = 1;
			}
		}
	cout << endl;
	cout << num ;
	}
	return 0;
}



