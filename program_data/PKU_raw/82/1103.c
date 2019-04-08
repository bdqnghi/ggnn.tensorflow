int main(){
	int x,y;
	int n;cin >> n;
	int m = 0,count = 0;
	while(n--){
		cin >> x >> y;
		if(x >= 90 && x <= 140 && y >= 60 && y <= 90){
			count ++;
			m = max(m,count);
		} else {
			count = 0;
		}
	}
	cout << m << endl;
	return 0;
}