int main()
{
	int  n,  i, j;
	char a[256]={'A'};
	scanf("%d", &n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(a);
		for(j=0;j<256;j++)
		{
			if(a[j] == 'A')
				a[j]='T';
			else if(a[j]=='T')
				a[j]='A';
			else if(a[j]=='C')
				a[j]='G';
			else if(a[j]=='G')
				a[j]='C';
			else
				a[j]='\0';
			
		}
		puts(a);
	}
	return 0;
}