int rp,re,lp,le;
int a[300][300];
int print(int rp,int re,int lp,int le,int r,int l)
{
	int i,j;
	if(rp>re||lp>le) return 0;
	if(l==lp&&r==rp)
	{
		for(i=rp,j=lp;j<=le;j++)
			printf("%d\n",a[i][j]);
		print(rp+1,re,lp,le,rp+1,le);
		return 0;
	}
	if(l==le&&r==rp)
	{
		for(i=rp,j=le;i<=re;i++)
			printf("%d\n",a[i][j]);
		print(rp,re,lp,le-1,re,le-1);
		return 0;
	}
	if(l==le&&r==re)
	{
		for(i=re,j=le;j>=lp;j--)
			printf("%d\n",a[i][j]);
		print(rp,re-1,lp,le,re-1,lp);
		return 0;
	}
	if(l==lp&&r==re)
	{
		for(i=re,j=lp;i>=rp;i--)
			printf("%d\n",a[i][j]);
		print(rp,re,lp+1,le,rp,lp+1);
		return 0;
	}
}
int main()
{
	
	int r,l;
	scanf("%d %d",&r,&l);
	int i,j;
	for(i=1;i<=r;i++)
		for(j=1;j<=l;j++)
			scanf("%d",&a[i][j]);
	rp=1;
	lp=1;
	re=r;
	le=l;
	print(rp,re,lp,le,1,1);
	return 0;
}