void main()
{
	char s0[200],s[200],kg[200];
	int i,i1,k=0,n;
	gets(s0);
	n=strlen(s0);
	for(i=0;i<n;i++)
		s[i+1]=s0[i];
	s[0]=s[n+1]=' ';
	for(i=n+1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			k=k+1;
			kg[k]=i;
		}
	}
	if(k==2)
		puts(s0);
	else
	{
		for(i=kg[2]+1;i<kg[1];i++)
		printf("%c",s[i]);
		for(i=2;i<=k-1;i++)
		{
			for(i1=kg[i+1];i1<kg[i];i1++)
				printf("%c",s[i1]);
		}
	}
}

