int main()
{
	int a[5][5];
	int i,j,k,flag[5][5],prime=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
			flag[i][j]=1;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				if(k==j) continue;
				else
					if(a[i][j]<a[i][k])
					{
						flag[i][j]=0;
						break;
					}
			}
		}
		for(j=0;j<5;j++)
		{
			if(flag[i][j]==1)
			{
				for(k=0;k<5;k++)
				{
					if(k==i) continue;
					else
						if(a[i][j]>a[k][j])
						{
							flag[i][j]=0;
							break;
						}
				}
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(flag[i][j]==1)
			{
				cout<<i+1<<' '<<j+1<<' '<<a[i][j]<<endl;
				prime=1;

			}
		}
	}
	if(prime==0)
		cout<<"not found";
	return 0;
}