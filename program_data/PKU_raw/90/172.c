int f(int m,int n)
{
	int k=0;
	if(m==0) k=1;
	if(m==1) k=1;
	if(n==1) k=1;
    if(m<n&&m>1) k=f(m,n-1);
	if(m>=n&&n>1) k=f(m,n-1)+f(m-n,n);
	return k;
}
int main()
{
	int t,i,k,m,n;
    scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		k=f(m,n);
		printf("%d\n",k);
	}
	return 0;
}
