int houwang(int n,int m);
int main()
{
	int n,m,b[100],i=0,j;
	
	for(;;)
	{
		i++;
		scanf("%d%d",&n,&m);
		if(m==0&&n==0)
		{
			break;
		}
		else
		{
			b[i]=houwang(n,m);
		}
	}
	for(j=1;j<i;j++)printf("%d\n",b[j]);
	return 0;

}
int houwang(int n,int m)
{
	int a[301],i,j=0,p=0,zongshu=n;
	a[0]=-1;
	for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(i=1;i<=n-1;i++)
	{
		p=0;
		for(;;)
		{
			j++;
			if(a[j%n]!=0)p++;
			if(p==m)
			{
				a[j%n]=0;
				break;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]!=0)return a[i]; 
	}
}

