
int f(int m,int n)
{
	int k=0;
	if(m<0)k=0;
	else if(m==0)k=1;
	else if(n==1)
		k=1;
	else k=f(m,n-1)+f(m-n,n);
	return(k);
}
int main()
{
	int i,t,n,m,k;
	int f(int m,int n);
	scanf("%d",&t);
	if(t>=0&&t<=20)
	{
		for(i=1;i<=t;i++)
		{
			scanf("%d%d",&m,&n);
			k=f(m,n);
			printf("%d\n",k);
		}
	}
	return 0;
}