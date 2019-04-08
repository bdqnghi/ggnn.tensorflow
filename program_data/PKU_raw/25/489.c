char a[2000];
int result[2000];
int temp[2000];
void calculate()
{
	memset(result,0,sizeof(result));
	int i = 0, j = 0;
	for(i = 0; i <= 1900; i++)
	{
		result[i] = temp[i] * 2 + result[i];
		if(result[i] >= 10)
		{
			result[i+1] = result[i] / 10 + result[i+1];
			result[i] = result[i] % 10;
		}
	}
	for(i = 0; i <= 1900; i++)
	{
		temp[i] = result[i];
	}
}
int main()
{
	memset(result,0,sizeof(result));
	memset(temp,0,sizeof(temp));
	temp[0] = 1;
	int n = 0, i = 0, j = 0;
	cin >> n;
	if(n == 0)
		cout << 1 << endl;
	else
	{
		for(i = 1; i <= n; i++)
		{
			calculate();
		}
		for(i = 1900; i >= 0; i--)
		{
			if(result[i] != 0)
				break;
		}
		for(j = i; j >= 0; j--)
		{
			cout << result[j];
		}
		cout << endl;
	}
	return 0;
}