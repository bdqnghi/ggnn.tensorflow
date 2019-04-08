int f(int m,int n)
{
	int z;
	if(m<n)
		n=m;
	if(m==0)
	{z=1;return z;}
	if(n==1)
	{z=1;return z;}
	z=f(m,n-1)+f(m-n,n);
	return z;
}

void main()
{
	int t,m[20],n[20],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m[i],&n[i]);
		
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",f(m[i],n[i]));
		
	}
}