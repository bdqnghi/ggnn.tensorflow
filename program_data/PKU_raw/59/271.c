int main()
{
    int i,n,m,j,k,count=0,l,p;
	int a0[100][100];
	char a[100][100];
	cin>>n;                                /*??????*/
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=7;j++)
		{
			a0[i][j]=-1;                   /*  ???????*/
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='.')
				a0[i][j]=1;
			else if(a[i][j]=='@')
				a0[i][j]=0;
			else
				a0[i][j]=-1;
		}
	}                                      /*??*/
	cin>>m;                                 /*????*/
	m -= 1;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{//???????
				if(a0[j][k]==0&&a[j][k]!='i')
				{
					if(a0[j+1][k]==1)
					{
						a0[j+1][k]=0;
						a[j+1][k]='i';
					}
                    if(a0[j-1][k]==1)
					{
						a0[j-1][k]=0;
                        a[j-1][k]='i';
					}
					if(a0[j][k+1]==1)
					{
						a0[j][k+1]=0;
						 a[j][k+1]='i';
					}
                    if(a0[j][k-1]==1)
					{
						a0[j][k-1]=0;
						 a[j][k-1]='i';
					}
				}
			}
		}
			for(l=1;l<=n;l++)
			{
				for(p=1;p<=n;p++)
				{
					a[l][p]='.';
				}
			}
	}
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				if(a0[j][k]==0)
				{
					count+=1;
				}
			}
		}
		cout<<count<<endl;
		return 0;

}