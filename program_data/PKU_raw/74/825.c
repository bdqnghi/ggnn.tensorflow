int main()
{
	int m,n,i=0,j=0,r=0,k=0,b,e;
	int a[10000];
	int d[10000]={0};
	int f[10000]={0};
	scanf("%d%d",&m,&n);
	for (i=m,k=0;i<=n;i++)
	{
		e=i;
		for (j=0;e!=0;j++)
		{
			b=e/10;
			a[j]=e-10*b;
			e=b;
		}
		j=j-1;
		for (r=0;r<=j;r++)
		{
			if (a[r]!=a[j-r]) break;
		}
		if (r>=j+1) 
		{
			d[k]=i;
			k=k+1;
		}
	}
	k=k-1;
	for (i=0,r=0;i<=k;i++)
	{
		for (j=2;j<d[i];j++)
		{
			if (d[i]%j==0) break;
		}
		if (j>=d[i])
		{
			f[r]=d[i];
			r=r+1;
		}
	}
	r=r-1;
	for(i=0;i<=r;i++)
	{
		if (f[i+1]!=0) printf("%d,",f[i]);
		if (f[i+1]==0&&f[i]!=0) printf("%d\n",f[i]);
	}
	if (f[0]==0) printf("no\n");
	return 0;
}