main()
{
	int sum(int x,int y);
	int i,t,m[21],n[21],c[21];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&m[i],&n[i]);
	}
	for(i=1;i<=t;i++)
	{
		c[i]=sum(m[i],n[i]);
	}
	for(i=1;i<=t;i++)
	{
		printf("%d\n",c[i]);
	}
}
int sum(int x,int y)
{
	int z;
	if(y==1)z=1;
	else {
		if(x<0)
	{
		z=0;
	}
	else
	{
		z=sum(x,y-1)+sum(x-y,y);
	}}
	return(z);
}
