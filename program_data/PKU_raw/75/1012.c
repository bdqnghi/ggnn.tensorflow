int main()
{
	int a[1000] = {0}, b[1000] = {0}; 
	int i, len1, len2, n, max = 0, sum = 0;
	int counts[1000] = {0};
	char c[10000] = {0}, d[10000];
	int k;
	len1 = 0;
	cin.getline(c, 10000);
	for(i = 0 ; c[i] != '\0' ; i++)
	{
		if(c[i] > 47 && c[i] < 58)
		{
			a[len1] = 10 * a[len1] + (c[i] - '0');
		}
		else
		{
			len1++;
		}
	}
	len2 = 0;
	cin.getline(d, 10000);
	for(i = 0 ; d[i] != '\0' ; i++)
	{
		if(d[i] > 47 && d[i] < 58)
		{
			b[len2] = 10 * b[len2] + (d[i] - '0');
		}
		else
		{
			len2++;
		}
	}
	n = len1;
	for(k = 0 ; k <= 1000 ; k++)
	{
		for(i = 0 ; i <= len1 ; i++)
		{
			if((k - a[i] >= 0) && (k - b[i]) < 0)
			{
				counts[k] = counts[k] + 1;
			}
		}
	}
	for(i = 0 ; i < 1000 ; i++)
	{
		if(counts[i] >= sum)
		{
			sum = counts[i];
		}
	}
		cout << n + 1 << " " << sum << endl; 
	return 0;
}
