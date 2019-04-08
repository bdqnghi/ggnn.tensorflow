int main()
{
	int j,i,n;
	char a[1000],b[1000][1000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
		for(j=0;a[j]!='\0';j++)
		{
			if(a[j]=='A')
			{
				b[i][j]='T';
			}
			else if(a[j]=='T')
			{
				b[i][j]='A';
			}
            else if(a[j]=='C')
			{
				b[i][j]='G';
			}
            else if(a[j]=='G')
			{
				b[i][j]='C';
			}
	    
		}
		b[i][j]='\0';
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;b[i][j]!='\0';j++)
		{
                printf("%c",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
