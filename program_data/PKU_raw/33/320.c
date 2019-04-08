int main()
{
	int n,i,j,k,l;
	char a[1000][256],b[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(a[i])+1;j++)
		{
			if(a[i][j]=='A')
			{
				b[i][j]='T';
				continue;
			}
			if(a[i][j]=='T')
			{
				b[i][j]='A';
				continue;
			}
			if(a[i][j]=='C')
			{
				b[i][j]='G';
				continue;
			}
			if(a[i][j]=='G')
			{
				b[i][j]='C';
				continue;
			}
			if(a[i][j]=='\0')
			{
				b[i][j]='\0';
				break;
			}
		}	
		printf("%s",b[i]);
		printf("\n");
	}
	return 0;
}
