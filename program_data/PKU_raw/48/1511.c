int main()
{
	int n,m,i,j,k,l,p,q,a[9][9],b[9][9],d;
	scanf("%d %d",&n,&d);
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			a[i][j]=0;
			b[i][j]=0;
		}
	}
	a[4][4]=n;
	for( ;d>0;d--)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(a[i][j]!=0)
				{
					b[i][j]+=a[i][j];
					for(p=i-1;p<=i+1;p++)
					{
						for(q=j-1;q<=j+1;q++)
						{
							b[p][q]+=a[i][j];
						}
					}
					a[i][j]=0;
				}
			}
		}
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				a[i][j]=b[i][j];
				b[i][j]=0;
			}
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j!=8)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("%d\n",a[i][j]);
			}
		}
	}
	return 0;
}