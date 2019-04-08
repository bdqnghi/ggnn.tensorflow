
int main()
{
	int i,j,n;
	char s[1000][300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(s[i]);j++)
		{
			if(s[i][j]=='A')
				printf("T");
			if(s[i][j]=='T')
				printf("A");
			if(s[i][j]=='C')
				printf("G");
			if(s[i][j]=='G')
				printf("C");
		}
		printf("\n");
	}
	
	return 0;
}
