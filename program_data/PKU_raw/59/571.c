int main()
{
	int n,m,i,k;
	scanf("%d",&n);
	char room[M][M];
	char room1[M][M];
	for(i=1;i<=n;i++)
	{
		scanf("%s",room[i]);
	}
	for(i=1;i<=n;i++)
	{
		strcpy(room1[i],room[i]);
	}
	scanf("%d",&m);
	m--;
	while(m)
	{
		for(i=1;i<=n;i++)
		{
			k=0;
			if((room[i][1]=='@'||room[i-1][0]=='@'||room[i+1][0]=='@')&&room[i][0]=='.')
			{
				room1[i][0]='@';
			}
			for(k=1;k<n;k++)
			{
				if((room[i][k+1]=='@'||room[i-1][k]=='@'||room[i+1][k]=='@'||room[i][k-1]=='@')&&room[i][k]=='.')
				{
					room1[i][k]='@';
				}
			}
		}
			for(i=1;i<=n;i++)
			{
				strcpy(room[i],room1[i]);
			}
			m--;
	}
		int sum=0;
		for(i=1;i<=n;i++)
		{
			for(k=0;k<n;k++)
			{
				if(room[i][k]=='@')
				{
					sum++;
				}
			}
		}
		printf("%d",sum);
		return 0;
}
