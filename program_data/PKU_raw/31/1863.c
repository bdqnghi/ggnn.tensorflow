void main()
{
	char s[1000][100];
	int i=0,k;
	gets(s[0]);
	while(s[i][0]!='e')
	{
		i=i+1;
		gets(s[i]);
	}
	for(k=i-1;k>=0;k--)
	{
		puts(s[k]);
	}
}

