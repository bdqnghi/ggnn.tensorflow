int main()
{
	int n,i,j,len[N];
	char sz[N][N];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&sz[i]);
		len[i]=strlen(sz[i]);
	}
		for(i=0;i<n;i++)
	{
			for(j=0;j<len[i];j++)
			{
				if(sz[i][j]=='A')
				{
					printf("T");
					
				}
				else if(sz[i][j]=='G')
				{
					printf("C");
				
				}
				else if(sz[i][j]=='C')
				{
					printf("G");
					

				}
				else if(sz[i][j]=='T')
				{
					printf("A");
				
				}
			}
		    printf("\n");
		}
		
		return 0;
}



				




