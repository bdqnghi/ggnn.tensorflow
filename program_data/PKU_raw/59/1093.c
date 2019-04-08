
int main()
{
	int n,m,i,j,k,cnt=0;
	int room[100][100];

	scanf("%d", &n);

	for(i=0; i<n;i++)
	{
		scanf("\n");
		for(j=0;j<n;j++)
		{
			char c;
			scanf("%c", &c);
			switch(c)
			{
			case '.'://??
				room[i][j]=0;break;
			case '#'://??
				room[i][j]=-1;break;
			case '@'://??
				room[i][j]=1;break;
			}
		}
	}

	scanf("%d", &m);

	for(k=2; k<=m; k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if (room[i][j]>0&&room[i][j]<k)
				{//???????????
					if (i>0 && room[i-1][j] == 0)
						room[i-1][j]=k;
					if (j>0 && room[i][j-1] == 0)
						room[i][j-1]=k;
					if (j<n && room[i][j+1] == 0)
						room[i][j+1]=k;
					if (i<n && room[i+1][j] == 0)
						room[i+1][j]=k;
				}
			}
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(room[i][j]>0)
				cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}