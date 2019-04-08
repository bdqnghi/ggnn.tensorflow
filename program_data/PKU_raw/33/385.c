int main()
{
	char s[10000][1000];
	int i=0, j=0, n;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%s", s[i]);
	for(i = 0; i < n; i++)
	{
		while(s[i][j]!='\0')
		{
			if(s[i][j]=='A')
				s[i][j]='T';
			else if(s[i][j]=='T')
				s[i][j]='A';
			else if(s[i][j]=='G')
				s[i][j]='C';
			else if(s[i][j]=='C')
				s[i][j]='G';
			j++;
		}
	//	printf("%s\n", s[i]);
		j = 0;
	}
	for(i = 0; i < n; i++)
		printf("%s\n", s[i]);
	return 0;
}