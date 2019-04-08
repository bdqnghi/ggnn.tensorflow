int main()
{
	int n,i,j,m;
	char a[500],b[500];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		scanf("%s",a);
		for(j=1;j<=strlen(a);j++)
		{
			if(a[j-1]=='A')
				b[j-1]='T';
			else if(a[j-1]=='T')
				b[j-1]='A';
			else if(a[j-1]=='C')
				b[j-1]='G';
			else if(a[j-1]=='G')
				b[j-1]='C';
		}
		for(m=1;m<=strlen(a);m++)
		{	printf("%c",b[m-1]);
		}
		printf("\n");
	}
	return 0;
}