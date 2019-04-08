
int a[25];
int result[25];

int main()
{
	int k;
	cin>>k;
	for(int i = k - 1; i >= 0; i--)
		cin>>a[i];

	result[0] = 1;
	for(int i = 1; i < k; i++)
	{
		int j = i - 1;
		while(j >= 0)
		{
			if(a[j] <= a[i])
			{
				if(result[j] > result[i])
					result[i] = result[j];
			}
			j--;
		}
		result[i]++;
	}

	int t = 0;
	for(int i = 0; i < k; i++)
	{
		if(result[i] > t)
			t = result[i];
	}

	cout<<t;
}