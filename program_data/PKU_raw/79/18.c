int hezi(int a[])
{
	int m,i=1;
	while(1)
	{
		if(a[i]!=0)
		{
			m=a[i];
			break;
		}
		i=i+1;
	}
	return m;
}
int pan(int n,int m)
{
	int a[301],b[301],i,k,l,p,s=0,r;
	for(i=0;i<=n;i++) a[i]=i;
	while(1)
	{
		l=1;
		k=0;
		while(m*l+s<=n)
		{
			a[m*l+s]=0;
			l=l+1;
			k=k+1;
			if(n-k==1)
			{
				a[1]=hezi(a);
				break;
			}
		}
		if(n-k==1) break;
		p=m*l+s-n;
		n=n-k;
		s=p%n;
		if(s==0) s=n;
		s=s-m;
		r=1;
		for(i=1;i<=n+k;i++)
		{
			if(a[i]!=0)
			{
				b[r]=a[i];
				r=r+1;
			}
		}
		for(i=1;i<=n;i++) a[i]=b[i];
	}
	return a[1];
}
int main()
{
	int n,m,a[20],i=0;
	while(1)
	{
	    scanf("%d %d",&n,&m);
	    if(m+n==0) 
		{
		    a[i]=0;
		    break;
		}
	    a[i]=pan(n,m);
	    i=i+1;
	}
	for(i=0;a[i]!=0;i++) printf("%d\n",a[i]);
	return 1;
}

