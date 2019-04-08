void main()
{
	int i,j,n,c=0,q=0,t;
	int m[1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&t);
			if(t==0)	
			{
				m[i]++;
				c++;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		if(m[i]!=0)
			q++;
	}
	printf("%d",(q-2)*(c-2*q)/2);
}