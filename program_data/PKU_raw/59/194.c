int main()
{
	char room[100][100];
	int n,i,j,day,k,num=0,change[100][100]={0};
	cin>>n;
    for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>room[i][j];
		cin>>day;
	for(k=1;k<day;k++)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			change[i][j]=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(room[i][j]=='@')
				{
			
					if(room[i+1][j]=='.')
						change[i+1][j]=1;
                    if(room[i][j+1]=='.')
						change[i][j+1]=1;
                   	if(room[i-1][j]=='.')
						change[i-1][j]=1;
                	if(room[i][j-1]=='.')
						change[i][j-1]=1;
				}
			}
		}
	    for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
			if(change[i][j])
				room[i][j]='@';
			}

	}
   	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(room[i][j]=='@')
				{
					num++;
				}
			}
		}
		cout<<num;
		return 0;
}