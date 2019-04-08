

int n, k;
int apples;

int func(int monkeys) {
	if (monkeys == n)
		return apples++;
	
	int tmp = func(monkeys + 1);
	while (tmp % (n - 1) != 0)
		tmp = func(monkeys + 1);
	return k + tmp*n / (n - 1);
}

int main() {
	cin >> n >> k;
	apples = n - 1;
	cout << func(0) << endl;
}