

int main() {
	char str[1000];
	cin >> str;
	for (int i = strlen(str)-1; i >= 0; i--)
		cout << str[i];
	return 0;
}
