int main()
{
	int i, c[251], d[251], sum[251], len = 0, temp = 0;
	memset(c, 0, sizeof(c));
	memset(d, 0, sizeof(d));
	memset(sum, 0, sizeof(sum));
	char a[251], b[251];
	cin.getline(a, 251);
	cin.getline(b, 251);
	for (i = 0; i < strlen(a) - 1; i++)
		if (a[i] != '0')
			break;
	temp = i;
	for (i = 0; i < strlen(a) - temp; i++)
		c[i] = a[strlen(a) - 1 - i] - '0';
	len = i;
	i = 0;
	for (i = 0; i < strlen(b) - 1; i++)
		if (b[i] != '0')
			break;
	temp = i;
	for (i = 0; i < strlen(b) - temp; i++)
		d[i] = b[strlen(b) - 1 - i] - '0';
	if (i > len)
		len = i;
	for (i = 0; i < len; i++)
	{
		sum[i] = sum[i] + c[i] + d[i];
		if (sum[i] >= 10)
		{
			sum[i] -= 10;
			sum[i + 1]++;
		}
	}
	if (sum[len] != 0)
		len++;
	for (i = len - 1; i >= 0; i--)
		cout << sum[i];
	return 0;
}