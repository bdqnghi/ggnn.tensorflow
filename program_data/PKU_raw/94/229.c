int main()
{
	int N, i, j, x;
	int a[500];
	scanf("%d", &N);
	for(i=0;i<N;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]%2==0)a[i]=0;
	}
	for(j=1;j<N;j++)
	{
		for(i=0;i<N-j;i++)
		{
			if(a[i]>a[i+1])
			{
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		if(a[i]!=0)
		{
		if(i<(N-1))
			printf("%d,", a[i]);
		else
			printf("%d", a[i]);
		}
	}
	return 0;
}
