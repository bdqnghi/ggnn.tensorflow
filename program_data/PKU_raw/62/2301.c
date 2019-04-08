
int main() {
	char a[100][100];
	int n;
	for(int i = 0; i < 100; i ++){
		cin >> a[i];
		char q = getchar();
		if(q == '\n'){//????????
			n = i + 1;
			break;
		}
	}
	cout << a[0];
	for(int k = 1; k < n; k ++)
		cout << " " << a[k];
	return 0;
}