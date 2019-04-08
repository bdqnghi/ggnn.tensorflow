
int num[10000000] = {0}, flag[10000000], len = 1;

void minusn()
{
	int i;
	flag[0] = 0;
	for(i = 0; i < len; i++)
	{
		num[i] *= 2;
		num[i] += flag[i];
		flag[i+1] = 0;
		if(num[i] >= 10)
		{
			flag[i+1] = 1;
			num[i] = num [i] % 10;
		}

	}
	if(flag[i] == 1)
	{
		len++;
		num[i] += flag[i];
	}

	return;
}

int main()
{
	int n, i, j, temp;
	num[0] = 1;
	cin >> n;
	for(i = 1; i <= n; i++)
		minusn();
	for(j = 0, i = len - 1; j < len / 2; j++, i--)
	{
		temp = num[i];
		num[i] = num[j];
		num[j] = temp;
	}
	for(i = 0; i < len; i++)
		cout << num[i];
	cout <<endl;

	return 0;
}