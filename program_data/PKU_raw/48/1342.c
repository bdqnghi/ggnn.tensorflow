void main()
{
	int i,j,k,m,n;
	int p,q;
	int a[5][9][9]={0};
	scanf("%d%d",&m,&n);
	a[0][4][4]=m;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<9;j++)
		{
			for(k=0;k<9;k++)
			{
				if(a[i-1][j][k]!=0)
				{
					a[i][j][k]+=a[i-1][j][k];
					for(p=j-1;p<=j+1;p++)
					{
						for(q=k-1;q<=k+1;q++)
						{
							a[i][p][q]=a[i][p][q]+a[i-1][j][k];
						}
					}
				}
			}
		}
      

	}

	for(j=0;j<9;j++)
	{
		printf("%d",a[n][j][0]);
		for(k=1;k<9;k++)
		{
			printf(" %d",a[n][j][k]);
		}
		printf("\n");
	}
}