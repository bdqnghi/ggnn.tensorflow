int main()
{
	int i,j,n,len;
	char zfc[1000][256];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s",zfc[i]);
		len=strlen(zfc[i]);
		for(j=0;j<len;j++)
		{
			if(zfc[i][j]=='A')
				printf("T");
			else if(zfc[i][j]=='T')
				printf("A");
			else if(zfc[i][j]=='G')
				printf("C");
			else
				printf("G");
		}
		printf("\n");

	}


	return 0;
}