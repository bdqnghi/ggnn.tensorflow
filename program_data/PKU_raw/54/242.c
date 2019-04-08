int whether(int n,int k,int m[],int q)
{
	int i=1;
	m[0]=q*n+k;
	for(i=1;i<n;i++)
	{
		if(m[i-1]%(n-1)==0)
		m[i]=m[i-1]*n/(n-1)+k;
		else 
		{
			return 0;break;
		}
	}
	if(i==n)
		return 1;
}
void main()
{
	int q=0,m[300]={0},k=0,n=0;
	scanf("%d%d",&n,&k);
	for(q=1;;q++)
	{
		if(whether(n,k,m,q)==1)break;
	}
	printf("%d",m[n-1]);
}
		
