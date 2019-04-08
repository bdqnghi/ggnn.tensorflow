int main() { 
	int t,n,m,k,c;
	cin >> t;
	while(t--) {
		cin >> n;
		c = 0;
		while(n--) {
			cin >> k;
			if(c + k < 60)
				if(c + k + 3 < 60)
					c += 3;
				else c = 60-k;
		}
		cout << 60 - c << endl << endl;
	}
	return 0; 
}