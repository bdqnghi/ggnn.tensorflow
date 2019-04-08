int main()
{
	char a[30];
	int num[20] = {0}, i, j, flag;
	gets(a);
	for (i = 0, j = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			num[j] = num[j] * 10 + (a[i] - '0');
			flag = 1;
		}
		else if (i > 0 && a[i - 1] >= '0' && a[i - 1] <= '9')
		{
			j++;
			flag = 0;
		}
	}
	for (i = 0; i < j; i++)
		cout << num[i] << endl;
	if (flag == 1)
		cout << num[j] << endl;
	return 0;
}