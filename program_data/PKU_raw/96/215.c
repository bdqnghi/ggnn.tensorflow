int main()
{
	char str[101];
	cin.getline(str, 101);
	int num[101];
	int   i, j;
	for (i = 0; i < strlen(str); i ++)
		num[i]  = str[i] - '0';
	int num1[100];
	memset(num1, 0, sizeof(num1));
	for (i = 0; i < strlen(str)-1; i ++)
	{
		num1[i] = (num[i] * 10 + num[i + 1]) / 13;
		num[i + 1]  = (num[i] * 10 + num[i + 1]) % 13;
	}
	j = 0;
	if (num1[j] == 0)
		j = 1;
	for (; j < i ; j ++)
		cout << num1[j];
	if (strlen(str) <= 2 && num1[0] == 0)
		cout << 0;
	cout << endl;
	cout << num[strlen(str) - 1]<< endl;
	return 0;
}

