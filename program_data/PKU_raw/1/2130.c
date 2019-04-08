main()
{
	int find(int m,int k);
	int n,y,d,c;
	scanf("%d",&c);
	for(d=0;d<c;d++)
	{
	scanf("%d",&n);
	y=find(n,1)	;
	printf("%d\n",y);
}
}
int find(int m,int k)
{
	int i,t=1,n=0,x=0,a,s=0;
	for(i=2;i<=m;i++)
	{
		if(m%i==0)n++;
	}
	if(n==1||m==1)return 1;
	else
  {
	for(i=2;i<=m;i++)
	{
		if(m%i==0&&m/i>=i&&i>=k)
		{
			 
			k=i;
			t=t+find(m/i,k);
	 
		}
		
	}
   }
	
	return t;
}