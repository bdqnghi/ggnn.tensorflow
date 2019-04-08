

int main()
{
	int n, i,j,max,final;
	int tomb[26];
	int num[26];
	cin >> n;
	for (i =0; i<n;i++)
		cin >> tomb[i];
	memset(num,0,sizeof(num));
	num[n-1]=1;
	final = 0;
	for(i=n-2;i>=0;i--)
	{
		j = i+1;
		max = 0;
		while (j < n)
		{
			if (tomb[j] <= tomb[i] && num[j] > max)
				max = num[j];
			j ++;
		}
		num[i] = max + 1;
		if (num[i] > final)
			final = num[i];
	}
	cout << final << endl;
	return 0;
}