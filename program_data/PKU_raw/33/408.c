int main()
{
	char zfc[1000][256];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(zfc[i]);
		j=0;
		while(zfc[i][j]!='\0')
		{
			if(zfc[i][j]=='A')
			{
				printf("T");
			}
			if(zfc[i][j]=='T')
			{
				printf("A");
			}
			if(zfc[i][j]=='C')
			{
				printf("G");
			}
			if(zfc[i][j]=='G')
			{
				printf("C");
			}
			j=j+1;
		}
		printf("\n");
	}
	return 0;
}