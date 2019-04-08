int main()
{
	int i,j,k,l,m,n;
	char a[1000][256],b[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		l=strlen(a[i]);
		for(j=0;j<l;j++)
		{
			if(a[i][j]=='G')
			{
				b[i][j]='C';
			}
			if(a[i][j]=='C')
			{
				b[i][j]='G';
			}
			if(a[i][j]=='A')
			{
				b[i][j]='T';
			}
			if(a[i][j]=='T')
			{
				b[i][j]='A';
			}
		}
		b[i][l]=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",b[i]);
	}
	return 0;
}