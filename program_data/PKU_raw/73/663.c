
int main() {
	int a[6][6];
	int max[6], mp[6];
	int s = 0;
	for ( int i = 1; i <= 5; i ++) {
		for ( int j = 1; j <= 5; j ++) {
			cin >> a[i][j];
		}
	}
	for ( int i = 1; i <= 5; i ++) {
		for ( int j = 1; j <= 5; j ++) {
			if ( j == 1) {max[i] = a[i][j]; mp[i] = j;}
			else if ( a[i][j] > max[i]) { max[i] = a[i][j]; mp[i] = j;}
		}
	}
	for ( int i = 1; i <= 5; i ++) {
		if ( max[i] <= a[1][mp[i]] && max[i] <= a[2][mp[i]] && max[i] <= a[3][mp[i]] && max[i] <= a[4][mp[i]] && max[i] <= a[5][mp[i]]) {
			s += 1;
			cout << i << " " << mp[i] << " " << max[i] << endl;
		}
	}
	if ( s == 0 ) cout << "not found";
	return 0;
}
