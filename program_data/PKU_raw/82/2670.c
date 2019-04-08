int main()
{
    int n,a[100],b[100],i=1,j=1,k=1,sum[100],max=0;
	memset (sum,0,sizeof(sum));
	cin >> n ;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i] >> b[i];
	}
	for (j = 1; j <= n; j++)
    {
	if ( (a[j] >= 90) && (a[j] <= 140) && (b[j] >= 60) && (b[j] <= 90) )
		sum[k] ++;
	else 
		k++;
	}
	for (k = 1; k <= n; k++)
	{
		if (sum[k] >= max)
			max = sum[k] ;
	}
	cout << max << endl;
	return 0;
}