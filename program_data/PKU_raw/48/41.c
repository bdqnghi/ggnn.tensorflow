int main()
{
	int i,j,t,m,n,r,s,a[9][9],b[9][9];
	scanf("%d %d",&m,&n);
	for(j=0;j<9;j++)
	{
		for(i=0;i<9;i++)
		{
			a[j][i]=0;
			b[j][i]=0;
		}
	}
	a[4][4]=m;
	b[4][4]=m;
	for(t=1;t<=n;t++)
	{
		for(r=4-t;r<=2+t;r++)
		{
			for(s=4-t;s<=2+t;s++)
			{
				for(j=0;j<=2;j++)
				{
					for(i=0;i<=2;i++)
					{
						a[r+j][s+i]+=b[r+1][s+1];
					}
				}
			}
		}
            for(j=0;j<9;j++)
				{
					for(i=0;i<9;i++)
					{
						b[j][i]=a[j][i];
						//a[j][i]=0;
					}
				}	
			
	}
	for(j=0;j<9;j++)
	{
		for(i=0;i<8;i++)
		{
			printf("%d ",b[j][i]);
		}
		printf("%d\n",b[j][8]);
	}


	
	return 0;
}

