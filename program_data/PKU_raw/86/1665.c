
int main(){
	int nCases, n, t;
	int wasteTime;
	
	cin >> nCases;
	while (nCases--){
		cin >> n;
		wasteTime = 0;
		for (int i = 0; i < n; i++){
			cin >> t;
			t += i * 3;
			if (t + 3 <= 60)
				wasteTime += 3;
			else if (t < 60 && t + 3 > 60)
				wasteTime += (60 - t);
		}
		
		cout << 60 - wasteTime << endl;
	}
	return 0;
}