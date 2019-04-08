int main()
{
    int n,m;
	char house[110][110]={'\0'};
	int day;
    int i,j;//???? 

	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		cin.getline(house[i],100,'\n');
	}
	cin>>m;

	for(i=n;i>0;i--)
	{
		for(j=n;j>0;j--)
			house[i][j]=house[i][j-1];
		house[i][0]='\0';
	}

	for(day=2;day<=m;day++){
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
		    	if(house[i][j]=='@')
				{
					if(house[i-1][j]=='.')
						house[i-1][j]=',';
					if(house[i+1][j]=='.')
						house[i+1][j]=',';
					if(house[i][j-1]=='.')
						house[i][j-1]=',';
					if(house[i][j+1]=='.')
						house[i][j+1]=',';
				}
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(house[i][j]==',')
					house[i][j]='@';
				}

	int count=0;

	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(house[i][j]=='@')
				count++;
		}

	cout<<count;
    
    return 0;
}