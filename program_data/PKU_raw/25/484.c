void f(int);
char mul[10000];
int main()
{
	int k, len, i;
	cin >> k;
	mul[0] = 2 + '0';
	if (k == 0)
	{
		cout << 1;
		exit(1);
	}
	f(k);
	len = strlen(mul);
	for (i = len - 1; i >= 0; i--)
		cout << mul[i] - '0';
	cout << endl;
	return 0;
}
void f(int k)
{
    int len, i;
	char mul_save[10000] = {0};
	if (k == 1)
		return ;
	else
	{
		len = strlen(mul);
		for (i = 0; i < len; i++)
		{
			mul_save[i] = (mul[i] - '0') * 2 + '0';
		}
		for (i = 0; i < len; i++)
		{
			if (mul_save[i] >= 10 + '0' && i != len - 1)
			{
				mul_save[i] -= 10;
				mul_save[i + 1]++;
			}
			else if(mul_save[i] >= 10 + '0')
			{
				mul_save[i] -= 10;
				mul_save[len] = 1+'0';
			}
		}
		if (mul_save[len] != 0)
			mul_save[len + 1] = 0;
		strcpy(mul, mul_save);
		f(k - 1);
	}
}

