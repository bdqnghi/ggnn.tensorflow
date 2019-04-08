int jian(int n,int m)
{
	int i,j,s,w,p;
	int a[301]={0};
	int b[300]={0};
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	w=n;
	for(i=0;i<w-1;i++)
	{
		s=m%n-1;
		if(s==-1 && m<n) s=m-1;
		else if(s==-1 && m>=n) s=n-1;
		a[s]=a[300];
		if(s==0)
		{
			for(j=0;j<n;j++)
			{
				a[j]=a[j+1];
			}
		}
		else
		{
		for(j=0;j<s;j++)
		{
			b[j]=a[j];
		};
		for(j=s+1;j<n;j++)
		{
			a[j-s-1]=a[j];
		}
		j=0;
		for(j=0;j<s;j++)
		{
			p=n-s+j-1;
			a[p]=b[j];
		}
		}
		n=n-1;
	}
	printf("%d\n",a[0]);
	return(0);
}
void main()
{
	int a[100]={0},b[100]={0};
	int i,j;
	for(i=0;;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==0) break;
	}
	for(j=0;j<i;j++)
	{
		jian(a[j],b[j]);
	}
}
