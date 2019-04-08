int f(int m,int n)
{
	int s;
	if (m>=1)
	{
		if (m>=n&&n!=1) s=f(m-n,n)+f(m,n-1);
		else if (m<n&&n!=1) 
			s=f(m,n-1);
	}
	if (m==0||n==1) s=1;
	return s;
}


void main()
{
	int k,m[100],n[100],i,s;
	scanf("%d",&k);
	for (i=0;i<k;i++)
		scanf("%d%d",&m[i],&n[i]);
	for (i=0;i<k;i++)
	{
		s=f(m[i],n[i]);
		printf("%d\n",s);
	}
}
