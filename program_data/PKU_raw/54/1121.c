int main()
{
	int m=1,n,k,t;
	int devide(int m,int n,int k);
	scanf("%d%d",&n,&k);
	for(m=1;;m++)
	{
		t=devide(m,n,k);
		if(t==1)
		{
			printf("%d", m);
			break;
		}
	}	
	getchar();
} 
int devide(int m,int n,int k)
{
	int t, i;
	t=m;
	for(i=1;i<=n;i++)
	{
		if(t%n==k)
			t=t-t/n-k;
		else
			break;
	}
	if (i>n&&t>=1)
		return 1;
	else
		return 0;
}
