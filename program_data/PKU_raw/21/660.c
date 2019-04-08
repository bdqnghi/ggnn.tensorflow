int main()
{
	int  i;
    double b[301],av,sum = 0,n,a[301];
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	av = sum / n;
	for(i = 0; i < n;i++)
	{
		b[i] = fabs(a[i] - av);
	}
	double max = 0;
	int	count = 0, c[301];
	c[0] = 0;
	for(i = 0; i < n; i++)
	{
		if(max < b[i])
		{
		    count = 0; 
			memset(c,0,sizeof(c[301]));
			max = b[i];
			c[count] = i;
		}
		if(fabs(max - b[i]) < 1e-5)
		{
			count++;
			c[count] = i;
		}
	}
	for(i = 0; i <= count; i++)
	 for(int j = 0; j <= count - i - 1; j++)
	 {
		 double temp;
		 if(a[c[j+1]] > a[c[j]])
		 {
			 temp = a[c[j]];
			 a[c[j]] = a[c[j+1]];
			 a[c[j+1]] = temp;
		 }
	 }
	cout << a[c[count]];
	if(count >= 1)
	{
		for(i = count - 2; i >= 0; i--)
			cout <<"," << a[c[i]];
	}
    cout << endl;
	return 0;
}

	


