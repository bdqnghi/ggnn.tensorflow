int main()
{
	int n,i,j,len;
	char a[256],b[256]={'\0'};
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		char b[256]={'\0'};
		len=0;
		gets(a);
		len=strlen(a);
		for(j=0;j<len;j++)
		{
			if(a[j]=='A')
			{
				b[j]='T';
			}
			else if(a[j]=='T')
			{
				b[j]='A';
			}
			else if(a[j]=='G')
			{
				b[j]='C';
			}
			else if(a[j]=='C')
			{
				b[j]='G';
			}
		}
		puts(b);
	}
	return 0;
}