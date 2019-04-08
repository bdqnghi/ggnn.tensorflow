
int main()
{
	int n,m;
	int sz[100][100],i,j,a=0,b=0,c=0,d=0,k,kk,kkk,kkkk;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	while(1)
	{
		k=0;
		kk=0;
		kkk=0;
		kkkk=0;
		for(i=a+1;i<=m-c;i++)
		{
			printf("%d\n",sz[b+1-1][i-1]);
			k=1;
		}
		if(k==0)
		{
			break;
		}
		c++;
		for(i=b+2;i<=n-d;i++)
		{
			printf("%d\n",sz[i-1][m-(c-1)-1]);
			kk=1;
		}
		if(kk==0)
		{
			break;
		}
		d++;
		for(i=m-c;i>=a+1;i--)
		{
			printf("%d\n",sz[n-(d-1)-1][i-1]);
			kkk=1;
		}
		if(kkk==0)
		{
			break;
		}
		a++;
		for(i=n-d;i>=b+2;i--)
		{
			printf("%d\n",sz[i-1][a-1]);
			kkkk=1;
		}
		b++;
		if(kkkk==0)
		{
			break;
		}
	}
	return 0;
}