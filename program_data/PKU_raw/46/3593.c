int main()
{
	int m,n,i,j,k,a,b,c;
	int sz[100][100];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0,a=0,b=1,j=0,k=0;i<m*n;i++,j+=a,k+=b)
	{
        printf("%d\n",sz[j][k]);
		if(a==0&&b==1&&j+k==n-1)
		{
			a=1;
			b=0;
		}
		else if(a==1&&b==0&&j-k==m-n)
		{
			a=0;
			b=-1;
		}
		else if(a==0&&b==-1&&j+k==m-1)
		{
			a=-1;
			b=0;
		}
		else if(a==-1&&b==0&&j-k==1)
		{
			a=0;
			b=1;
		}
	}
	return 0;
}
