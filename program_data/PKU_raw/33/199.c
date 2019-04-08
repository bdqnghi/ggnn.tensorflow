int main()
{
	char a[1000][1000],b[1000][1000]={'\0'};
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;a[i][j]=='A'||a[i][j]=='C'||a[i][j]=='T'||a[i][j]=='G';j++)
		{
			if(a[i][j]=='A')
				b[i][j]='T';
			else if(a[i][j]=='T')
				b[i][j]='A';
			else if(a[i][j]=='C')
				b[i][j]='G';
			else if(a[i][j]=='G')
				b[i][j]='C';
		}
		b[i][j]='\0';
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",b[i]);
	}
	return 0;
}


