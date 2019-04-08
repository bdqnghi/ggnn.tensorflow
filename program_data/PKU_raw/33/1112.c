int main()
{
	int n;
	scanf("%d",&n);
	char a[300],b[300];
	int i,j;
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
		for(j=0;a[j]!='\0';j++)
		{
			if(a[j]=='A')
				b[j]='T';
			if(a[j]=='T')
				b[j]='A';
			if(a[j]=='C')
				b[j]='G';
			if(a[j]=='G')
				b[j]='C';
		}
		b[j]='\0';
		printf("%s\n",b);
	}
	return 0;
}