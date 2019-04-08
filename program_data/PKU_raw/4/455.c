int main()
{
	int z[100][100];
	int m,n,a,b,c;
	scanf("%d%d",&m,&n);
	for(a=0;a<=m-1;a++)
	{
		for(b=0;b<=n-1;b++)
		{
			scanf("%d",&z[a][b]);
		}
	}
	a=0;b=0;
	for(c=0;c<=m*n-1;c++)
	{
		printf("%d\n",z[a][b]);
		a++;b--;
		if((a>m-1)||(b<0))
		{
			while((a>0)&&(b<n-1))
			{
				a--;b++;
			}
			if((a==0)&&(b<n-1)) b++;
			else a++;
		}
	}
	return 0;
}