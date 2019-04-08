int main()
{
    int n,i,j;
	char a[10000][1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]=='A')
				a[i][j]='T';
			else if(a[i][j]=='T')
				a[i][j]='A';
			else if(a[i][j]=='G')
				a[i][j]='C';
			else if(a[i][j]=='C')
				a[i][j]='G';
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",a[i]);
		if(i!=n-1)
			printf("\n");
	}
return 0;
}