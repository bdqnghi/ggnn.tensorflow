int main() {
	char str[100][100];

	int j, i, c;
	for (i = 0; i < 100; i++) {//?????
		for (j = 0; j < 100; j++)
			str[i][j] = 'x';

	}
	i = 0;
	cin >> str[i++];
	while ((c = getchar()) != '\n')//????
		cin >> str[i++];
	i--;
	while (i > 0)//??????
		cout << str[i--] << ' ';
	cout << str[0];
	return 0;
}