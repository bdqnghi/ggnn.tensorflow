//*******************************
//???????
//??????1200012798
//??? 2012.11.4
//******************************* 


int main()
{
	int n,k;
	int num[100000];
	int count=0;

	cin >> n;
	for (int i = 0; i <= n - 1; i++) 
	{
		cin >> num[i];
	}
	cin >> k;
	for (int j = 0; j <= n-1-count; )
	{
		if (num[j] == k)
		{
			for (int l = j; l <= n - 2 - count; l++)
			{
				num[l] = num[l + 1];
			}
			count++;
		}
		else
		{
			j++;
		}
	}
	cout << num[0];
	for (int m = 1; m <= n-1-count; m++)
	{
		cout << " " << num[m];
	}

	return 0;
}