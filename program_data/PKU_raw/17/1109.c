int main() {
	int n;
	cin >> n;
	for ( int m = 1; m <= n; m ++ ) {
		char str[105], str2[105];
		cin >> str;
		int stack[105];
		int len = strlen( str ), k = 0;
		for ( int i = 0; i < len; i ++ ) {
			str2[i] = ' ';
		}
		str2[len] = '\0';
		for ( int i = 0; i < len; i ++ ) {
			if ( str[i] == ')' ) {
				if ( k == 0 || stack[k - 1] > 0 ) {
					stack[k ++] = i + 1;
				}
				else k --;
			}
			else if ( str[i] == '(' ) {
				stack[k ++] = - i - 1;
			}
		}
		for ( int i = 0; i < k; i ++ ) {
			if ( stack[i] < 0 ) str2[-stack[i] - 1] = '$';
			else str2[stack[i] - 1] = '?';
		}
		cout << str << endl;
		cout << str2 << endl;
	}
	return 0;
}