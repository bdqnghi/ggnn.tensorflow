int n, a[100];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> *(a + i);
	for (int i = 1; i < n - i + 1; i++){
		int temp = *(a + n - i + 1);
		*(a + n - i + 1) = *(a + i);
		*(a + i) = temp;
	}
	for (int i = 1; i < n; i++)
		cout << *(a + i) << ' ';
	cout << *(a + n) << endl;
	return 0;
}
