int main()
{
	int n,i=0,j=2,p,q,r;
	int m[100],t[100];
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d\n",&m[i]);
	}
	scanf("%d",&m[n-1]);
	i=0;
	for(i=0;i<n;i++)
	{
		if(m[i]==1||m[i]==2)
		{
			t[i]=1;
		}
		if(m[i]>2)
		{
			p=1;
			q=1;
			for(j=2;j<m[i];j++)
			{
				r=q;
				q=p+q;
				p=r;
			}
			t[i]=q;
			j=2;
		}
	}
	i=0;
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",t[i]);
	}
	printf("%d",t[n-1]);
	return 0;
}