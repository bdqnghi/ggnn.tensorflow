main()
{
	int m,i,j,l;
	float k,p;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++,i++)
	{
		k=sqrt(i);
		for(j=2;j<=k;j++)
			if(i%j==0)break;
		
		p=sqrt(m-i);
		for(l=2;l<=p;l++)
			if((m-i)%l==0)break;
	    if(j>k&&l>p)
			printf("%d %d\n",i,m-i);
	}
}