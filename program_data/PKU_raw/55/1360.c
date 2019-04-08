
char n[10000000], result[10000000];
long int exchange = 0;

void change(int a, char t[], int b)
{
	int len, i, j, k, temp, temp2, pow = 1;
	len = strlen(t);
	i = len - 1;
	j = 0;
	while (i >= 0)
	{
		if (t[i] >= 'A' && t[i] <= 'Z')
			temp = 10 + t[i] - 'A';
		else
		{
			if (t[i] >= 'a' && t[i] <= 'z')
			temp = 10 + t[i] - 'a';
			else
				temp = t[i] - '0';
		}
		exchange = exchange + temp * pow;
		pow = a * pow;
		i--;
		j++;
	}
	if (exchange == 0)
		cout << 0;
	else
	{
		j = 9999999;
		while (exchange != 0)
		{
			temp2 = exchange % b;
			if (temp2 >= 0 && temp2 <= 9)
				result[j] = temp2 + 48;
			else
				result[j] = temp2 + 55;
			exchange = exchange / b;
			j--;
		}
		for (k = j + 1; k < 10000000; k++)
			cout << result[k];
	}
}

int main()
{
	int a, b;
	cin >> a;
	cin >> n;
	cin >> b;
	change(a, n, b);
	return 0;
}