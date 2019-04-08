int main() {
	int n;
	cin >> n;
	for (;;) {
		if (n == 1) {
			cout << "End";
			break;
		}
		else if (n % 2 == 0) {
			cout<<n<<"/"<<"2=";
			n = n / 2;
			cout<<n<<endl;
			continue;
		}
		else {
			cout<<n<<"*3+1=";
			n=n*3+1;
			cout<<n<<endl;
		}
	}
}

