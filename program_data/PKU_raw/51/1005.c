struct Ans
{
	char str[5];
	int times;
} answer[260];
int main()
{
	char a[500], temp[5];
	int n, i, j, len, p = 0, q, max = 0;
	cin >> n;
	cin >> a;
	len = strlen(a);
	for (i = 0; i <= len - n; i++)
	{
		for (j = 0; j < n; j++)
		{
			temp[j] = a[j + i];
		}
		temp[n] = '\0';
		if (p == 0)
		{
			strcpy(answer[p].str, temp);
			answer[p].times = 1;
			p++;
		}
		else
		{
			for (q = 0; q < p; q++)
			{
				if (strcmp(answer[q].str, temp) == 0)
				{
					answer[q].times++;
					q = -1;
					break;
				}
			}
			if (q == p)
			{
				strcpy(answer[p].str, temp);
				answer[p].times = 1;
				p++;
			}
		}
	}
	for (i = 0; i < p; i++)
	{
		if (answer[i].times > max)
		{
			max = answer[i].times;
		}
	}
	if (max == 1)
	{
		cout << "NO" << endl;
	}
	else
	{cout << max << endl;
	for (i = 0; i < p; i++)
	{
		if (answer[i].times == max)
		{
			cout << answer[i].str << endl;
		}
	}}
	return 0;
}