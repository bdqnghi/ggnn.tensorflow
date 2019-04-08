int cal(int m,int n)
{

	if(n<=0)
	return(0);
	else if(m<0)
	return(0);
	else if(m==0)
	return(1);

	else 
	return((cal(m,n-1)+cal(m-n,n)));
}
int main()
{
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
		printf("%d\n",cal(m,n));
	}
	
}