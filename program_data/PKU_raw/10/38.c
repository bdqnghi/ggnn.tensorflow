int main()
{
	int k;
	int a[100]={0};
	int f[100]={0};
	a[0]=100000;
	cin >> k;
	int i,j;
	int max=0;
	for(i=1;i<=k;i++)
	{
		cin >> a[i];
		for(j=0;j<i;j++)
		{
			if(a[j]>=a[i])
			{
				if(f[i] < f[j] + 1)
				{
					f[i]=f[j]+1;
				}
			}
		}
		if(max<f[i])
		{
			max=f[i];
		}
	}
	cout << max << endl;
}
