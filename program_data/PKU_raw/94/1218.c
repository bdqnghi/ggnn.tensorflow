int main()
{
	int N,m,n,t,i,k;
	scanf("%d",&N);
	int b[500];
	int a[500];
	for(i=0;i<N;i++)
	{
		scanf("%d",&b[i]);
	}
	n=0;
	for(i=0;i<N;i++)
	{
		if(b[i]%2==1)
			n++;
	}
	k=0;
	for(i=0;i<N;i++)
	{
		if(b[i]%2==1)
		{
			a[k]=b[i];
			k++;
		}
	}
	for(m=0;m<n;m++)
	{
		for(i=m;i<n;i++)
		{	
			if(a[m]>a[i])
			{
				t=a[m];
				a[m]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d",a[n-1]);
	return 0;
}