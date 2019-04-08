
int main()
{
	char num[100];
	int result[100];
	memset(num,'0',100);
	memset(result,0,100);
	int yushu = 0, len, i = 0, j = 0;
	cin.getline(num,100);
	len = strlen(num);
	if (len == 1)
	{
		cout << 0 << endl;
		cout << num[0] << endl;
	}
	else
	{
		result[0] = ((num[0] - '0') * 10 + num[1] - '0') / 13;
		yushu = ((num[0] - '0') * 10 + num[1] - '0') % 13;
		for (i = 1; i <= len - 2; i++)
		{
			result[i] = (yushu * 10 + num[i + 1] - '0') / 13;
			yushu = (yushu * 10 + num[i + 1] - '0') % 13;
		}
		if ((result[0] == 0) && len > 2)
			j = 1;
		for (j; j < i; j++)
			cout << result[j];
		cout << endl;
		cout << yushu << endl;
	}
	return 0;
}