int fang(int m,int n)
{
	int c;
	if(n==1)
		c=1;
	else if(m==1)
		c=1;
	else if(m==0)
		c=1;

	else if(m>=n)
	{
		c=fang(m,n-1)+fang(m-n,n);
	}
	else if(m<n)
	{
		c=fang(m,m);
	}
	return(c);
}
int main()
{
	int t,m,n,i,c;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);
		c=fang(m,n);
		printf("%d\n",c);
	}
}