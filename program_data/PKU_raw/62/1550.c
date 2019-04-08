int main() {
	char a[100], b[100];
	cin.getline(a, 100);
	char *p1, *p2;
	int len = strlen ( a );
	p2 = b;
	for ( p1 = a; p1 <= a + len - 1; p1 ++) {
		if ( * p1 != ' ' ) * ( p2 ++ ) = * p1;
		else if ( * p1 == ' ' && * ( p1 + 1 ) != ' ' ) * ( p2 ++ ) = ' ';
	}
	* p2 = '\0';
	cout << b << endl;
	return 0;
}
