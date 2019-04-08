
void a (int k,int n);
void a (int k,int n)
{
	int e[300]={0},f[300]={0},i=0,j=0,t=0;
	for (i=0;i<k;i++)
		scanf("%d",&e[i]);
	for (j=0;j<n;j++)
		scanf("%d",&f[j]);
	for (i=0;i<k-1;i++)
	{
		for (j=0;j<k-1;j++)
		{
			if (e[j]>e[j+1])
			{
				t=e[j];e[j]=e[j+1];e[j+1]=t;
			}
		}
	}
    for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1;j++)
		{
			if (f[j]>f[j+1])
			{
				t=f[j];f[j]=f[j+1];f[j+1]=t;
			}
		}
	}
	for (i=k,j=0;i<k+n;i++,j++)
	{
		e[i]=f[j];
	}
	for (i=0;i<n+k;i++)
	{
		printf("%d",e[i]);
		if (i!=n+k-1)
			printf(" ");
	}
}
void main()
{   int k=0,n=0;
	
	scanf("%d %d",&k,&n);
	a(k,n);
}