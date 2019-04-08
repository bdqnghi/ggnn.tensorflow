int main()
{
	int n, i, k, a[101], zd=0, zdbh, cd=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>zd)
		{
			zd=a[i];
			zdbh=i;
		}
	}
	printf("%d\n", zd);
	a[zdbh]=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>cd)
		{
			cd=a[i];
		}
	}
	printf("%d", cd);
	return 0;
}


