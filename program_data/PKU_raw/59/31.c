
int main()
{
	int n,i,j;
	int a[101][101]={0};
	char map[101][101];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf(" %c ",&map[i][j]);
			if(map[i][j]=='.')a[i][j]=1;     //1??????
			else if(map[i][j]=='#')a[i][j]=0;//0??????
			else a[i][j]=2   ;                 //2???????
		}
	}
	int m;
	scanf("%d",&m);
	m=m-1;
	while(m--)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]==2)
				{
					if(a[i-1][j]==1) a[i-1][j]=3;//3???????????
					if(a[i+1][j]==1) a[i+1][j]=3;
					if(a[i][j-1]==1) a[i][j-1]=3;
					if(a[i][j+1]==1) a[i][j+1]=3;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]==3) a[i][j]=2;
			}
		}


		


	}
	int num=0;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]==2) num++;
			}
		}
	printf("%d",num);


	
}