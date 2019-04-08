int main()
{
	int i,j,n,m,k[10],c;
	int l[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		c=60;
		for(j=0;j<m;j++)
		{
			scanf("%d",&k[j]);
			if(k[j]<=c)
				c=(k[j]+3>c)?k[j]:(c-3);
		}
		printf("%d\n",c);
	}
	return 0;
}