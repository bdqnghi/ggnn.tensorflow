void main()
{
	char w[50][15];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",w[i]);
	}
	for(i=0;i<n;i++)
	{
		if(w[i][strlen(w[i])-3]=='i')
		{
			for(j=0;j<(int)strlen(w[i])-3;j++)
				printf("%c",w[i][j]);
			printf("\n");
		}
		 else
		 {
			 for(j=0;j<(int)strlen(w[i])-2;j++)
				printf("%c",w[i][j]); 
			 printf("\n");
		 }
	}

}