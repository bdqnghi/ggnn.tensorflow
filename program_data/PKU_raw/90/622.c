int move(int m,int n)
{
	if(m==1||m==0||n==1)
		return(1);
	else if(m<n&&m!=0)
		return(move(m,m));
	else
	{
		int k=0,i;
		for(i=0;i<n;i++)
			k=k+move(m-n+i,n-i);
		return(k);
	}
}
main()
{
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		printf("%d\n",move(m,n));
	}
}