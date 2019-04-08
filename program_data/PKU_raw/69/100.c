char c1[210];
char c2[210];
int num1[210];
int num2[210];
int main()
{
	cin >> c1 >> c2;
	memset(num1, 0, sizeof(num1));
	memset(num2, 0, sizeof(num2));
	if ((strcmp(c1, "0") == 0) && (strcmp(c2, "0") == 0))
		cout << 0 << endl;
	for (int i = strlen(c1) - 1, j = 0; i >= 0; i--)
		num1[j++] = c1[i] - '0';
	for (int i = strlen(c2) - 1, j = 0; i >= 0; i--)
		num2[j++] = c2[i] - '0';
	int len = strlen(c1) > strlen(c2) ? strlen(c1) : strlen(c2);
	for (int i = 0; i < len; i++)
	{
		num1[i] += num2[i];
		if (num1[i] >= 10)
		{
			num1[i+1]++;
			num1[i] -= 10;
		}
	}
	
	for (int i = 0; i <= len; i++)
		c1[i] = num1[i] + '0';
	int pos = 209;
	while(num1[pos] == 0)
		pos--;
	for (int i = pos; i >= 0; i--)
		cout << c1[i];
	cout << endl;
	return 0;
}

