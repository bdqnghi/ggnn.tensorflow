
int reverse(int num) {
	if(num == 0) return 0;
	int a[70] = {0};
	int count = 0;
	if(num > 0) {
		while(num > 0) {
			a[count] = num % 10;
		    num /= 10;
			count++;
		}
		for(int i = 0; i < count; i++) {
			num *= 10;
			num += a[i];
		}
		return num;
	}
	if(num < 0) {
		num *= -1;
		while(num > 0) {
			a[count] = num % 10;
		    num /= 10;
			count++;
		}
		for(int i = 0; i < count; i++) {
			num *= 10;
			num += a[i];
		}
		num *= -1;
		return num;
	}
}

int main() {
	const int line = 6;
	int num = 0;
	for(int i = 0; i < line; i++) {
		cin >> num;
		num = reverse(num);
		cout << num << endl;
	}
	return 0;
}