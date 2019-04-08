void main()
{
	int m,n,i,j,a=0,w=0,c=0;
	int s[1001],t[1001];
    scanf("%d",&s[c]);
	while(getchar()==',')
	{
		c++;
		scanf("%d",&s[c]);
	}
	m=c;
	c=0;
   scanf("%d",&t[c]);
	while(getchar()==',')
	{
		c++;
		scanf("%d",&t[c]);
	}

	for(i=0;i<10001;i++)
	{
		for(j=0;j<=m;j++)
		{

		 if(i>=s[j]&&i<t[j])
		 {
			 w++;
		 }
		}
		if(w>a)
			a=w;
		w=0;
	}
	c=(m+1);
	printf("%d %d",c,a);
}

