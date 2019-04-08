int count(int m,int n)
{
	int y;
	if(m==1||n==1) y=1;
	else if(m>n) y=count(m-n,n)+count(m,n-1);
	else if(m==n) y=1+count(m,n-1);
	else if(m<n) y=count(m,m);
	return y;
}
int main()
{
	int m,n,t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",count(m,n));
	}
	return 0;
}