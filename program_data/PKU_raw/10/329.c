
int numbers[1001],maxLength[1001];
int n,max = 0, temp = 0, check = 0;
int j;

int main()
{
	cin>>n;
	for (int i = n-1; i >= 0; i--)
		cin>>numbers[i];
	maxLength[0] = 1;
	for (int i = 1; i < n; i++)
	{
		temp = 0; check = 0;
		for (j = 0, maxLength[i] = 0; j < i; j++)
		{// <= !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			if ( numbers[j] <= numbers[i] && maxLength[j] >= maxLength[i] && maxLength[j] >= maxLength[temp])
			{
				temp = j;
				check++;
			}
		}
		if (check) maxLength[i] = maxLength[temp]+1;
		else maxLength[i] = 1;
	}
	for (int i = 0; i < n; i++)
		if (max < maxLength[i]) max = maxLength[i];
	cout<<max;
	return 0;
}