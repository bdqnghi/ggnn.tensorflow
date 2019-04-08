
int mon[1000]={0};
void main()
{
	
	void fking(int a[1000],int k,int p);
	int n,m,j;
	
	while (1)
	{
	
	scanf("%d%d",&n,&m);
	if ((n==0)&&(m==0)) break;
	if (m==1) printf("%d\n",n);

	else 
	{for(j=1;j<=n;j++)
		mon[j]=j;
	fking(mon,n,m);
	}
	
}
}

void fking(int a[1000],int k,int p)
{
	int b[1000];int i;
	if(k>=p)
	{
		for(i=1;i<=k-p;i++)
			b[i]=a[p+i];
		for(i=k-p+1;i<=k-1;i++)
			b[i]=a[i+p-k];
		fking(b,k-1,p);
	}
	else
		if(k>0&&k<p)
		{
			for(i=1;i<=k-p%k;i++)
				b[i]=a[p%k+i];
			for(i=k-p%k+1;i<=k-1;i++)
				b[i]=a[i-k+p%k];
			if(k>=2)
				fking(b,k-1,p);
			else
				printf("%d\n",b[1]);

		}
}

