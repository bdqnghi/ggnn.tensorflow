int main()
{
	char a[500], b[500];
	cin >> a >> b;
	int length1 =0, length2 = 0, c = 0, i = 0, flag1 = 1;
	length1 = strlen(a);
	length2 = strlen(b);
	int a1[501], b1[501];
	int result[501];
	memset(a1,0,sizeof(a1));
	memset(b1,0,sizeof(b1));
	memset(result,0,sizeof(result));
	for(i = 0; i <= length1 - 1; i++)
	{
		a1[length1 - 1 - i] = a[i] - '0';
	}
	for(i = 0; i <= length2 - 1; i++)
	{
		b1[length2 - 1 - i] = b[i] - '0';
	}
	for(i = 0; i <= 500; i++)
	{
		result[i] = a1[i] + b1[i] + result[i];
		if(result[i] >= 10)
		{
			result[i+1] = result[i] / 10 + result[i+1];
			result[i] = result[i] % 10;
		}
	}
	for(i = 500; i >= 0; i--)
	{
		if(result[i] != 0)
		{
			flag1 = 0;
			break;
		}
	}
	c = i;
	if(flag1 == 0)
	{
		for(i = c; i >= 0; i--)
		{
			cout << result[i];
		}
		cout << endl;
	}
	if(flag1 == 1)
	{
		cout << 0 << endl;
	}
	return 0;
}