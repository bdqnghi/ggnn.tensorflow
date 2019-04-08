int main()
{
	int n,i;
    scanf("%d",&n);

	char t[1000][300];
	for(i=0;i<n;i++)
	{
	   scanf("%s",&t[i]);
	}
	for(i=0;i<n;i++)
	{
		int l=0;
		l=strlen(t[i]);
	    int j;
		for(j=0;j<l;j++)
		{
			if(t[i][j]=='A')
			{
				printf("T");
			}
			if(t[i][j]=='T')
			{
				printf("A");
			}
			if(t[i][j]=='C')
			{
				printf("G");
			}
			if(t[i][j]=='G')
			{
				printf("C");
			}
		}
		printf("\n");
	}


 return 0;
}