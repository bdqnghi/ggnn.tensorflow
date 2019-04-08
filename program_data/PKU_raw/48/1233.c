void step(int a[N][N])
{
	int b[N][N]={0};
	int i,j,k,l;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			b[i][j]=a[i][j];
			a[i][j]=0;
		}
	}
	for(i=1;i<N-1;i++)
	{
		for(j=1;j<N;j++)
		{
			if(b[i][j]>0)
			{
				for(k=i-1;k<=i+1;k++)
				{
					for(l=j-1;l<=j+1;l++)
					{
						a[k][l]+=b[i][j];
					}
				}
				a[i][j]+=b[i][j];
			}
		}
	}
}
int main()
{
	int a[N][N]={0},m,n,t,p;
    scanf("%d %d",&m,&n);
	a[N/2][N/2]=m;
	for(t=0;t<n;t++)
	{
		step(a);
	}
	for(t=0;t<N;t++)
	{
		printf("%d",a[t][0]);
		for(p=1;p<N;p++)
		{
			printf(" %d",a[t][p]);
		}
		printf("\n");

	}
	return 0;
} 