

int main()
{
	//int num = 0;
	int a[500] = {0}, max = 0;
	char temp[5];
	int n;
	char str[500];
	cin >> n;
	cin >> str;int m;
	for (int i = 0; i <= strlen(str) - n; i++)
	{
		for (int k = i; k < i + n; k++)
		{
			temp[k - i] = str[k];
		}
		for (int j = i + 1; j <= strlen(str) - n; j++)
		{
			for (m = 0; m < n ;m++)
			{
				if (temp[m] != str[j + m])
					break;
			}
			if (m == n)
			{
				a[j] = -1000;
				a[i]++;
				max = max > a[i]? max:a[i];
			} 
		}
	}
	if (max)
	{
		cout << max + 1 << endl;
		for (int i = 0; i <= strlen(str) - n; i++)
		{
			if (a[i] == max)
			{
				for (int p = i; p < i + n; p++)
				{
					cout << str[p];
				}
				cout << endl;
			}
		}
	}
	else
	  cout << "NO";
	return 0;
}
