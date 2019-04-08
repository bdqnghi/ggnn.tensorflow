

int main()
{
	int n,x;
	scanf("%d ",&n);
	for(x=0;x<n;x++)
	{
		char c[256]={'\0'};
		scanf("%s",c);
		int i,len;
		len=strlen(c);
		for(i=0;i<len;i++)
		{
			if(c[i]=='A')
			{
				c[i]='T';
				continue;
			}
			if(c[i]=='T')
			{
				c[i]='A';
				continue;
			}
			if(c[i]=='C')
			{
				c[i]='G';
				continue;
			}
			if(c[i]=='G')
			{
				c[i]='C';
				continue;
			}
		}
		if(x<n-1)
		printf("%s\n",c);
		else
			printf("%s",c);
	}
	return 0;
}