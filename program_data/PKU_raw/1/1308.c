
int calculate(int a, int num) { // a is the max num
	int sum = 0;
	if(num == 1) return 1;
	for(int i = num; i >= 2; i--) {
		if(num % i == 0 && i <= a) {
			sum += calculate(i, num / i); 
		}
	}
	return sum;
}

int main () {
	int n;
	cin >> n;
	int num = 0;
	for(int i = 0; i < n; i++) { // input part
		cin >> num;
		cout << calculate(num, num) << endl;
	}
	return 0;
}