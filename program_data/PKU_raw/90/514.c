int f(int m,int n)
{
	int k;
	if(m<n)
    {
		if(m==1) k=1;
		else k=f(m,m);
	}
	if(m>=n)
	{
		if(n==1||n==0) k=1;
		else k=(f(m,(n-1))+f((m-n),n));
	}
	return (k);
    
}
void main()
{
	int n,m,k,i;
	scanf("%d\n",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d %d\n",&m,&n);
		int y=f(m,n);
		printf("%d\n",y);
	}

}
