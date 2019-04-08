int main()
{
	int n,i,j,b,x,y;
	char a[10000][300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=strlen(a[i]);
		for(j=0;j<b;j++)
		{
			if(a[i][j]=='A')
			{
				a[i][j]='T';
			}
			else if(a[i][j]=='T')
			{
				a[i][j]='A';
			}
			else if(a[i][j]=='C')
			{
				a[i][j]='G';
			}
			else if(a[i][j]=='G')
			{
				a[i][j]='C';
			}
		}
		puts(a[i]);
	}
	return 0;
}