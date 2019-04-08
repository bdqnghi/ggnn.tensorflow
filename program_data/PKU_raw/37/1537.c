int main()
{
	int n,s;
	scanf("%d\n",&n);
	char zfc[1000][1000];
	for(int i=0;i<n;i++)
	{
		gets(zfc[i]);
	}
	for(int i=0;i<n;i++)
	{
		int m=strlen(zfc[i]);
		for(int j=0;j<m;j++)
		{
			s=0;
			for(int k=0;k<m;k++)
			{
				if(zfc[i][j]==zfc[i][k])
				{
					s=s+1;
				}
			}
			if(s==1)
			{
				printf("%c\n",zfc[i][j]);
				break;
			}
			if(j==m-1)
			{
				printf("no\n");
			}
		}
	}
	scanf("%d",&n);
	return 0;
}
