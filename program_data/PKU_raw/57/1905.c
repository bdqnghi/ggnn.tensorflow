int main()
{
	int n;
	scanf("%d",&n);
	char dc[50][30];
	int i;
	int sz[50];
	for(i=0;i<n;i++)
	{
		scanf("%s",dc[i]);
		sz[i]=strlen(dc[i]);
	}
	for(i=0;i<n;i++)
	{
		if(dc[i][sz[i]-1]=='g')
		{
			int j;
			for(j=0;j<sz[i]-3;j++)
				printf("%c",dc[i][j]);
		}
		else
		{
			int j;
			for(j=0;j<sz[i]-2;j++)
				printf("%c",dc[i][j]);
		}
		printf("\n");
	}
	return 0;
}